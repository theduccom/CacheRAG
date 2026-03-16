#include<cstdio>
#include<algorithm>
#include<iostream>
#include<functional>
#define inf 1000000
using namespace std;
long long int p[114514],x,y,z,w;
int main(void)
{
	int i,j,k,f,n,cnt;
	while(1) {
		cin>>n;
		f=0,cnt=0;
		if(!n)break;
		for(i=0;i<4001;i++) p[i]=0;
		for(i=0;i<n;i++) {
			cin>>x>>y>>z;
			if(p[x]>=inf) continue;
			p[x]+=y*z;
			if(p[x]>=inf) f=1,cout<<x<<endl;
		}
		if(f==0) cout<<"NA"<<endl;
	}
	return 0;
}