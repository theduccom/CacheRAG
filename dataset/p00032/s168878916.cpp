#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	char q;
	int a1,a2,a3,b=0,c=0;
	while(cin>>a1>>q>>a2>>q>>a3){
		if(a1==a2)b++;
		if(a1*a1+a2*a2==a3*a3)c++;
	}
	cout<<c<<endl<<b<<endl;
}