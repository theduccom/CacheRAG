#include<iostream>
using namespace std;

int main(){
	double a;
	
	while(cin >> a){
		double s = a, prev = a;
		for(int i=2; i<=10; i++){
			if(i%2 == 0){
				prev *= 2;
				s+=prev;
			}else{
				prev /= 3;
				s+=prev;
			}
		}
		printf("%.8f\n",s);
	}
	return 0;
}
				