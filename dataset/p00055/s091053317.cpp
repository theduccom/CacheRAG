#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	double a,temp;
	double sum;
	while(scanf("%lf",&a)!=EOF){
		temp=a;
		sum=a;
		for(int i=2;i<=10;i++){
			if(i%2==0)
			temp=temp*2;
			else
			temp=temp/3;
			sum+=temp;
		}
		printf("%.8f\n",sum);
	}
}