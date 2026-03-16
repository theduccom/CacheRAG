#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	float x1,x2,x3, h ,h2, s , l;
	while(cin>>x1>>h){
		if(x1==0&&h==0)break;
		x2 = x1 / 2;
		x3=pow(x2,2);
		h2=pow(h ,2);
		x2 += h2;
		s =sqrt(x3+h2);
		
		l = (x1*s)/2;
		printf("%f\n",((4*l)+(x1)*(x1)));
	}
}