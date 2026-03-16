#include <iostream>
#include <stack>
#include <map>
#include <string>
#include <cctype>
using namespace std;

map<char,int> order;
string S; size_t cur=0;
stack<int> num,rnum,tmpnum;
stack<char> op,rop,tmpop;

int digit(){
	int n=S[cur++]-'0';
	return n;
}

int number(){
	int n=digit();
	while(isdigit(S[cur]))
		n=n*10+digit();
	return n;
}

void calc(){
	for(int i=1;i<=2;i++){
		while(!rop.empty()){
			if(order[rop.top()]!=i){
				tmpop.push(rop.top());rop.pop();
				tmpnum.push(rnum.top());rnum.pop();
			}
			else{
				int a=rnum.top();rnum.pop();
				int b=rnum.top();rnum.pop();
				char o=rop.top();rop.pop();
				int c;
				switch(o){
					case '+' :
						c=a+b;
						break;
					case '-' :
						c=a-b;
						break;
					case '*' :
						c=a*b;
						break;
					case '/' :
						c=a/b;
						break;
					default :
						break;
				}
				rnum.push(c);
			}
		}
		tmpnum.push(rnum.top());rnum.pop();
		if(tmpnum.size()==1)
			break;
		while(!tmpop.empty()){
			rop.push(tmpop.top());tmpop.pop();
			rnum.push(tmpnum.top());tmpnum.pop();
		}
		rnum.push(tmpnum.top());tmpnum.pop();
	}
	num.push(tmpnum.top());tmpnum.pop();
	return ;
}

int exp(){
	cur =0;
	int smax=S.size();
	while(cur < smax-1){
		//cout << cur << endl;
		if(isdigit(S[cur])){
			int a=number();
			num.push(a);
		}else if(S[cur] == ')' ){
 			while(!op.empty()&&op.top()!='('){
				rop.push(op.top());op.pop();
				rnum.push(num.top());num.pop();
			}
			rnum.push(num.top());num.pop();
			calc();
			//cout << num.top() << endl;
			op.pop();cur++;
		}else{//ひとまず終了　演算記号のチェックも入れる
			//	cout << "come" << endl;
			op.push(S[cur++]);
		}
	}
	//cout << num.top() << endl;//
	//int tmp1=num.top();num.pop();
	//cout << num.top() << endl;//
	//int tmp2=num.top();num.pop();
	//cout << num.top() << endl;//
	//num.push(tmp2);
	//num.push(tmp1);

	while(!op.empty()&&op.top()!='('){
		rop.push(op.top());op.pop();
		rnum.push(num.top());num.pop();
	}
	rnum.push(num.top());num.pop();

	calc();
	//cout<< " check "  << op.empty() << endl;
	int ans=num.top();
	num.pop();
	return ans;
}

int main(void){
	order['+']=2;
	order['-']=2;
	order['*']=1;
	order['/']=1;
	//cout << order['('] << endl;
	int n;
	cin >> n;
	while(n--){
		cin >> S;
		cout << exp() << endl;
	}
	return 0;
}