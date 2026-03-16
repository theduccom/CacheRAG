#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
	int a,b,c,flg;
	flg=0;
	cin>>a>>b>>c;
	if(a==1 && b==1) flg=1;
	if(a==0 && b==0 && c==1) flg=1;
	if(flg==1) cout<<"Open"<<endl;
	else  cout<<"Close"<<endl;
	return 0;
}
