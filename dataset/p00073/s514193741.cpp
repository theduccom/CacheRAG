#include <iostream>
#include <sstream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
#include <cmath>

//AOJ0073
#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;

int main(void){

int x,h;
char k;
	while(cin >> x >> h){
		if(x==0 && h==0 || cin.eof()) break;
		double trg = sqrt(x*x/4.00 + 1.00*h*h) * x * 0.5;
		
		printf("%.8f\n",trg*4+x*x*1.00);
	}
	return 0;
	
}