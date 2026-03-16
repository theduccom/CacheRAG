#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int i;
	double a, s[11], sum;
	while(cin>>a){
		s[0]=a;
		sum=a;
		for(i=1;i<10;i++){
			if(i%2){
				s[i] = s[i-1] * 2.0;
			}else{
				s[i] = s[i-1] / 3.0;
			}
			sum += s[i];
		}
		printf("%.8f\n", sum);
	}
	return 0;
}