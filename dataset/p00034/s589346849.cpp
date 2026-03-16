#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;


int main(void){

int l[10] ,v1,v2;
char cc;

	while(cin >> l[0] ){
		rep2(i,1,10) cin >> cc >> l[i];
		cin >> cc >> v1 >> cc >> v2;
		int kr=0;
		rep(i,10) kr += l[i];
		double tm = kr * 1.0l / (v1 + v2);
		double km = v1 * tm;
		kr = 0;
		rep(i,10){
			kr += l[i];
			if(kr >= km){
				cout << i+1 << endl;
				break;
			}	
		}
//		printf("%f,%f kr=%d\n",tm,km,kr);
	}
	return 0;
	
	
}