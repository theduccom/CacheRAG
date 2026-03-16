#include<cstdio>
#include<algorithm>
#include<iostream>
#include<functional>
#include<cstring>
using namespace std;
int main(void)
{
	int i,j,k,n,f1,f2,f3,h1,h2,h3;
	int out,hit,hran,v;
	char s[8];
	cin>>n;
	for(i=0;i<n;i++) {
		out=hit=hran=v=f1=f2=f3=0;
		while(1) {
			cin>>s;
			if(strcmp("HIT",s)==0) {
				h1=h2=h3=0;
				if(f1==0) f1=1,h1=1;
				if(f2==0&&f1==1&&h1==0) f2=1,h2=1;
				if(f3==0&&f2==1&&h2==0) f3=1,h3=1;
				if(f3==1&&h3==0) v++;
			}
			if(strcmp("HOMERUN",s)==0) {
				v+=(f1+f2+f3+1);
				f1=f2=f3=0;
			}
			if(strcmp("OUT",s)==0) {
				out++;
				if(out==3) {out=0;break;}
			}
		}
		cout<<v<<endl;
	}
}
		