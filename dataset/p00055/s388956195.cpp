#include <cstdio>
#include<iostream>
 
using namespace std;
  
int main(void){
 
	double a,before,sum;
 
    while(cin>>a){
		before=a;
		sum=before;
		for(int i=2;i<=10;i++){
			if(i%2==0) before*=2;
			else before/=3;
			sum+=before;
		}
			printf("%.8f\n",sum);
    }
 
    return 0;
}