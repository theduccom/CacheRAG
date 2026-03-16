#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	int a[]={1,2,4,8,16,32,64,128,256,512};
	while(cin>>n){
		vector<int> x;
		for(int i=0;i<10;i++){
			if(n/a[10-i-1]==1){
				//cout<<a[10-1-i]<<endl;
				n-=a[10-i-1];
				x.push_back(a[10-i-1]);
				if(n==0)break;
			}
		}
		
		for(int i=0;i<x.size()-1;i++){
			cout<<x[x.size()-1-i]<<" ";
		}
		cout<<x[0]<<endl;
	}
	return 0;
}