#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int a,a1,a2,a3,i,sum=0,avg=0;
	while(1){
		cin>>a;
		if(a==0) break;
		for(i=0;i<a;i++){
			cin>>a1>>a2>>a3;
			sum=a1+a2+a3;
			avg=sum/3;
			if(a1==100||a2==100||a3==100||avg>=80||(a1+a2)/2>=90)
				printf("A\n");
			else if(avg>=70||
				avg>=50&&a1>=80||
				avg>=50&&a2>=80)
				printf("B\n");
			else
				printf("C\n");
		}
	}
	return 0;
}