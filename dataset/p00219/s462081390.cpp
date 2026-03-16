#include<iostream>

using namespace std;
  
int main(void){

	int sold[10];
	int n,ice;

	while(1){
		cin>>n;
		if(n==0) break;
		for(int i=0;i<=9;i++) sold[i]=0;
		for(int i=0;i<n;i++){
			cin>>ice;
			sold[ice]++;
		}
		for(int i=0;i<=9;i++){
			if(sold[i]==0) cout<<"-"<<endl;
			else{
				while(sold[i]--){
					cout<<"*";
				}
				cout<<endl;
			}
		}
	}

	return 0;
}