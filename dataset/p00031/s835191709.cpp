#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>
#include <algorithm>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define repp(i,r,n) for(int i=r;i<(int)n;i++)
using namespace std;
int in(){int x;cin>>x;return x;}

string s[10]={"1","2","4","8","16","32","64","128","256","512"};
int ss[10]={1,2,4,8,16,32,64,128,256,512};

string ans[1200];
void sss(string z,int y,int l)
{
	ans[y]=z;
	if(l==10)return ;
	sss(z,y,l+1);
	if(z!="")z+=" ";
	z+=s[l];
	y+=ss[l];
	sss(z,y,l+1);
	return ;

}


int main ()
{
	int a;
	sss("",0,0);	
	while(scanf("%d",&a)!=EOF)
	{
		cout<<ans[a]<<endl;
	}

	return 0;
}