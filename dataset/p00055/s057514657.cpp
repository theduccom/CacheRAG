#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;

int main(){
	
 	double a,b;
	double s;
	while(cin>>a){
		s=a;
		for(int i=2;i<=10;i++){
		if(i%2==0)
			a=a*2;
		else
			a=a/3;
		s+=a;
		
	}
		printf("%.8f\n",s);
	
}
}