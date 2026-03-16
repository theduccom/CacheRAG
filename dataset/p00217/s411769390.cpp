#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
#include<vector>
#include<stack>
#include<queue>
#include<iostream>
using namespace std;
int main(void)
{
	int mx,once,i,j,n,a,b,c;
	while(1) {
		cin >>n;
		if(n==0) break;
		mx=-1;
		for(i=0;i<n;i++) {
			cin >>a>>b>>c;
			if(mx<b+c){
				mx=b+c;
				once=a;
			}
		}
		cout <<once<< " "<<mx<<endl;
	}
	exit(0);
}