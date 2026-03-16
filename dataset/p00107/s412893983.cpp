#include <iostream>
#include <stack>
#include <algorithm>
#include <cstdio>
#include <sstream>
#include <vector>
#include <string>
#include <cmath>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;


int main(void){

int h[3],n,r;
int tp;

	while(cin >> h[0] >> h[1] >> h[2] ){
		if(h[0]==0 && h[1]==0 && h[2]==0 || cin.eof()) break;
		sort(h,h+3);
		int r2 = h[0]*h[0]+h[1]*h[1];
		cin >> n;
		rep(i,n){
			cin >> r;
			cout << (4*r*r>r2? "OK": "NA") << endl;
		}
	}
	return 0;
}