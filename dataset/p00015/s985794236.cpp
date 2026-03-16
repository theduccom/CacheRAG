#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int main(){
	string s1, s2;
	stack<int> sum;
	int tmp, carry, n, len1, len2;

	cin>>n;
	while(n--){
		tmp = carry = 0;
		while(!sum.empty())sum.pop();
		cin>>s1>>s2;
		len1 = s1.length()-1;
		len2 = s2.length()-1;
		reverse(s1.begin(), s1.end());
		reverse(s2.begin(), s2.end());

		for(int i=0; i<81; i++){
			tmp = carry;
			if(i<=len1) tmp += s1[i]-'0';
			if(i<=len2) tmp += s2[i]-'0';
			sum.push(tmp%10);
			carry = tmp/10;
		}
		if(sum.top() != 0)cout<<"overflow\n";
		else{
			for(int i=0; i<80; i++){
				if(sum.top()==0)sum.pop();
				else break;
			}
			while(!sum.empty()){cout<<sum.top(); sum.pop();}
			cout<<"\n";
		}
	}	
	return 0;
}