#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,a,b[10];
	while(true){
	cin>>n;
	if(n==0)
		break;
	for(int i=0;i<10;i++)
		b[i]=0;
	for(int i=0;i<n;i++){
		cin>>a;
		b[a]++;
	}
	for(int i=0;i<10;i++){
		if(b[i]==0)
			cout<<"-"<<endl;
		else{
		for(int j=0;j<b[i];j++)
			cout<<"*";
		cout<<endl;
		}
	}
	}
    return 0;
}
 