#include<iostream>
#include<cmath>
using namespace std;

int dt[50001];

int main(){
	dt[0]=0;
	dt[1]=0;
	for(int i=2;i<50001;i++){
		dt[i]=1;
	}
	for(int i=2;i<sqrt(50001);i++){
		for(int j=2;i*j<50001;j++){
			dt[i*j]=0;
		}
	}
	int num=0;
	while(1){
		int cnt=0;
		cin>>num;
		if(num==0)break;
		for(int i=1;i<(num/2+1);i++){
			if(dt[i]==1){
				if(dt[num-i]==1){
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}