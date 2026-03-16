#include<iostream>
#include<cmath>
#include <cstdio>
using namespace std;
int main(){
	double x,h,seihou = 0,naname = 0,y = 0,sannkaku = 0,kotae = 0;
	
	
	while(true){
		cin >> x >> h;
		if(x == 0 && h == 0){
			break;
		}
		seihou = x * x;
		y = x/2;
		naname = sqrt(y*y + h*h) ;
		sannkaku = x * naname * 4 / 2;
		kotae = sannkaku + seihou;
		printf("%.6f\n",kotae);
	}
	
}