#include <iostream>
#include <stdio.h>

using namespace std;

double s(double s0,int n){
	if(n==1){
		return s0;
	}
	else if(n%2==1){
		return s(s0,n-1)/3.0;
	}
	else{
		return s(s0,n-1)*2;
	}
}

int main(){
	double s0;
	while(cin>>s0){
		double sum = 0;
		for(int i=1;i<=10;i++){
			sum += s(s0,i);
		}
		printf("%.6f\n",sum);
	}	

	return 0;

}

/*
Sample Input
1.0
2.0
3.0
Output for the Sample Input
7.81481481
15.62962963
23.44444444
*/