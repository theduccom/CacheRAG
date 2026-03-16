#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

int main(){
	
	int moto,sum,a,b;
	
	while(1){
	
		cin >> a;
	
		if(a==-1) break;
		
		sum=1150;
		moto=4280;
		
		for(int i=11;i<=a;i++){
			if(20>=i){
				sum+=125;
			}else if(20<i && 30>=i){
				sum+=140;
			}else sum+=160;
		}
		
		b=moto-sum;
		
		printf("%d\n",b);
		
	}
	
	return 0;
}