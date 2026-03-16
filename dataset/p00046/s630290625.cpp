#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;




int main(void){
 
double hi,hmx=-999,hmn=99999999;
	while(cin >> hi){
		hmx = max(hmx, hi);
		hmn = min(hmn, hi);
	}

	printf("%.1lf\n",hmx-hmn);
    return 0;
}