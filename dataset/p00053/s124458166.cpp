#include<iostream>
#include<cmath>
using namespace std;

bool memo[104730]={false};

void prime(void){
	bool flag;
	
	memo[2]=true;
	
	for(int i=3;i<104730;i=i+2){
		flag=true;
		for(int j=3;j<=sqrt((double)i);j=j+2){
			if(i%j==0){
				flag=false;
				break;
			}
		}
		if(flag==true){
			memo[i]=true;
		}
	}
	return;
}

int main(){
	int n;
	int sum;
	prime();
	
	while(cin>>n,n){
		sum=0;
		for(int i=0,j=0;j<n;i++){
			if(memo[i]==true){
				sum=sum+i;
				j++;
			}
		}
		cout<<sum<<endl;
	}
}