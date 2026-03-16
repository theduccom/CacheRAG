#include <bits/stdc++.h>
using namespace std;
int main(){
	int data[10],n,a;
	while(cin>>n,n){
		memset(data,0,sizeof(data));
		for(int i=0;i<n;i++){
			cin>>a;
			data[a]++;
		}
		for(int i=0;i<10;i++){
			if(data[i]==0){
				cout<<"-"<<endl;
			}else{
				for(int j=0;j<data[i];j++){
					cout<<"*";
				}
				cout<<endl;
			}
		}
	}
}