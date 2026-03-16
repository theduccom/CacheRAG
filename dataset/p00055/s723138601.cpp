#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	double n;
	while(cin >>n){
		double a[10] = {n},sum = n;
		for(int i=1; i<10; i++){
			if(i%2 == 0){a[i] = a[i-1]/3;}
			else{a[i] = a[i-1]*2;}
			sum+=a[i];
		}
		printf("%.8lf\n",sum);
	}
	return 0;
}