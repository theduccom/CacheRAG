#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int i,j,k,n,a,data[10];
	while(cin>>n&&n) {
		for(i=0;i<10;i++) data[i]=0;
		for(i=0;i<n;i++) {
			cin>>a;
			data[a]++;
		}
		for(i=0;i<10;i++) {
			if(data[i]==0) cout<<"-";
			for(j=0;j<data[i];j++) {
				cout<<"*";
			}
			cout<<endl;
		}
	}
}