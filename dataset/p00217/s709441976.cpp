#include <bits/stdc++.h>
using namespace std;
int main(){
	while(1){
	int ar[99999]={0};
	int n,num=0,res=0;
	cin >> n;
	if(n==0) return 0;
	for(int i=0;i<n;i++){
		int a,b,c;
		cin>>a>>b>>c;
		ar[a]=b+c;
	}
	for(int i=1;i<=10000;i++){
		if(ar[i]>num){
			res=i;
			num=ar[i];
		}
	}
	cout<<res<<" "<<num<<endl;
	}
	return 0;
}