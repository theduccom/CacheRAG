#include <iostream>
#include <stack>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

int main(){
	int n;
	cin >> n;
	REP(i, n){
		stack<int> a,b,ret;
		string p,q;
		cin>>p>>q;
		REP(j, p.length()) a.push(p[j]-'0');
		REP(j, q.length()) b.push(q[j]-'0');
		int k = 0;
		while(a.size() || b.size() || k){
			int buf = k;
			if (a.size()){
				buf += a.top();
				a.pop();
			}
			if(b.size()){
				buf += b.top();
				b.pop();
			}
			ret.push(buf % 10);
			k = buf / 10;
		}
		if (ret.size() > 80){
			cout<<"overflow"<<endl;
		}
		else{
			while(ret.size()) {
				cout<<ret.top();
				ret.pop();
			}
			cout<<endl;
		}
	}
	return 0;
}