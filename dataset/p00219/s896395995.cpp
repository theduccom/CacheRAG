#include <bits/stdc++.h>
using namespace std;
int main(){
	while(1){
		int a[10]={0};
		int n;
		cin>>n;
		if(n==0) return 0;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			a[num]++;
		}
		for(int i=0;i<10;i++){
			for(int j=0;j<a[i];j++) cout<<"*";
			if(a[i]==0) cout<<"-";
			cout<<"\n";
		}
	}
}