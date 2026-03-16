#include<iostream>
using namespace std;

int main(){
	
	int n;
	while(cin>>n){
		if(n!=0){
			int ice[10]={0};
			int a;
			for(int i=0;i<n;i++){
				cin>>a;
			ice[a]++;
			}
			for(int i=0;i<10;i++){
			if(ice[i]==0)
				cout<<"-";
			else{
			for(int j=0;j<ice[i];j++)
				cout<<"*";
			}
				cout<<endl;
		}
	}
		else
			break;
	}
}