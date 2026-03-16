#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;
int main(){
	
	int x,h;
	double t,s;
	while(cin>>x>>h){
		if(x!=0&&h!=0){
			t=sqrt(pow((double)x/2,2)+pow(h,2));
			s=pow(x,2)+(double)(x*t)*2;
		
		printf("%.6f\n",s);
		}
		else
			break;
	}
	
}