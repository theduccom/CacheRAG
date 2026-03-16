#include<iostream>
using namespace std;
int main(){
	int a[10];
	int n,l;
	
	while(cin>>n,n!=0){
		for(int i=0;i<10;i++)a[i]=0;
		for(int i=0;i<n;i++){
			cin>>l;
			a[l]++;
		}
		for(int i=0;i<10;i++){
			if(a[i]==0)cout<<"-";
			else for(int j=0;j<a[i];j++){
				cout<<"*";
			}
			cout<<endl;
		}
	}


}