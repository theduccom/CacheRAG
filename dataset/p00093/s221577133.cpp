#include<iostream>
using namespace std;

int main(){
	int year[3001];
	for(int i=0;i<3001;i++){
		if(i%4==0){
			year[i]=1;
		}else year[i]=0;
		if(i%100==0){
			year[i]=0;
		}
		if(i%400==0){
			year[i]=1;
		}
	}
	int a,b;
	cin>>a>>b;
	int cnt=0;
	if(a==0 && b==0)goto LABEL;
	for(int j=a;j<=b;j++){
		if(year[j]==1){
			cout<<j<<endl;
			cnt++;
		}
	}
	if(cnt==0)cout<<"NA"<<endl;
	while(1){
		cnt=0;
		cin>>a>>b;
		if(a==0 && b==0){
			break;
		}else{cout<<endl;}
		for(int j=a;j<=b;j++){
			if(year[j]==1){
				cout<<j<<endl;
				cnt++;
			}
		}
		if(cnt==0)cout<<"NA"<<endl;
	}
	LABEL:
	return 0;
}