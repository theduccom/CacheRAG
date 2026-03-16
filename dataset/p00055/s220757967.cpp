#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#include <map>


#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;


int main(void){

double a;
	while(cin >> a){
		if( cin.eof()) break;
		double s = a;
		rep2(i,2,11){
			if(i%2) a /= 3;
			else    a *= 2;
			s += a;
		}
		printf("%.10f\n", s);
	}
	return 0;
	
	
}