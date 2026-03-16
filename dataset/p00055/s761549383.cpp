#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	double n,sum;
	while(cin>>n){
		sum=n;
		for(int i=2;i<=10;i++){
			if(i%2==0){
				n*=2;
				sum+=n;
			}else{
				n/=3;
				sum+=n;
			}
		}printf("%.8lf\n",sum);
	}
	return 0;
}