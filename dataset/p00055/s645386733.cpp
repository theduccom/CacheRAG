#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

//double solve(double n)

int main(void){

	double sum,table[11]={0};
	
	while(cin>>table[0]){
		sum=table[0];
		for(int i=1;i<10;i++){
			if(i%2==0){
				table[i]=table[i-1]/3;
			}
			else{
				table[i]=table[i-1]*2;	
			}			
			sum=sum+table[i];
		}
		printf("%.9f\n",sum);
		memset(table,0,sizeof(table));
	}
}