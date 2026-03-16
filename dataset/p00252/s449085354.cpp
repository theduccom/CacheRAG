#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;
int main(){
	bool f;
	int b1,b2,b3;
	cin>>b1>>b2>>b3;
	if(b1==1&&b2==0&&b3==0)f=false;
	else if(b1==0&&b2==1&&b3==0)f=false;
	else if(b1==1&&b2==1&&b3==0)f=true;
	else if(b1==0&&b2==0&&b3==1)f=true;
	else f=false;
	if(f)cout<<"Open"<<endl;
	else cout<<"Close"<<endl;
} 