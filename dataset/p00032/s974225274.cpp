#include<bits/stdc++.h>
using namespace std;
int a,b,c,cnt1=0,cnt2=0;
char ch;
signed main(void){
	ios::sync_with_stdio(false);
	while(cin>>a>>ch>>b>>ch>>c){
		if(a==b)
			cnt2++;
		if(a*a+b*b==c*c)
			cnt1++;	
	}
	cout<<cnt1<<endl
		<<cnt2<<endl;
}