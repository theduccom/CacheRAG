#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	double n,prev;
	while(cin >> n){
		double ret = 0;
		for(int i=0;i<10;i++){
			ret += n;
			prev = n;
			if(i%2)n=prev/3;
			else n = prev*2;
		}
		printf("%.8lf\n",ret);
	}
}