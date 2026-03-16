#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;

int n,num,flag;
long int shine[4000],tannka,kosu;

int main(){
	while(1){
		cin>>n;
		if(n==0){break;}
		for(int i=0;i<n;i++){
			cin>>num>>tannka>>kosu;
			shine[num]+=tannka*kosu;
			if(shine[num]>=1000000){
				cout<<num<<endl;
				flag++;
			}
		}
		if(flag==0){cout<<"NA"<<endl;}
		else{flag=0;}
		for(int i=0;i<4000;i++){
			shine[i]=0;
		}
	}
	
	return 0;
}