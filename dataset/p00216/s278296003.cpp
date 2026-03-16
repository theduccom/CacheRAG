#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int a,b;
	while(1){
		cin >> a;
		if(a ==- 1){
			return 0;
		}
		if(a<=10){
			b=1150;
		}
		else if(a<=20){
			b=125*a-100;
		}
		else if(a<=30){
			b=140*a-400;
		}
		else{
			b=160*a-1000;
		}
		b=4280-b;
		cout << b << "\n";
	}

	
	return 0;
}