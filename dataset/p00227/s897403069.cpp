#include <bits/stdc++.h>
using namespace std;

int p[1010];

int main(){
	while(1){
		int n,m,t=0;
		cin>>n>>m;
		if(n==0&&m==0) break;
		for(int i=0;i<n;i++) cin>>p[i];
		int f=1;
		while(f==1){
			f=0;
			for(int j=0;j<n-1;j++){
				if(p[j]<p[j+1]){
					swap(p[j],p[j+1]);
					f=1;
				}
			}
		}
		for(int i=1;i<=n/m;i++){
			p[i*m-1]=0;
		}
		for(int i=0;i<n;i++){
			t+=p[i];
		}
		cout<<t<<endl;
	}
	return 0;
}
