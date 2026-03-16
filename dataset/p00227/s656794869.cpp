#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,temp;
	while(1){
		cin >> n >> m;
		int a[n+1],sum=0;
		if(n==m && n==0) break;
		for(int i=1;i<=n;i++){
			cin >> a[i];
		}
		for(int i=1;i<n;i++){
			for(int j=i+1;j<n+1;j++){
				if(a[i]<a[j]){
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		for(int i=1;i<n+1;i++){
			if(i%m!=0){
				sum+=a[i];
			}
		}
		cout << sum << endl;
	}
}
