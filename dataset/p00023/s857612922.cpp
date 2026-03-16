#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(x=from;x<to;x++)

using namespace std;

double tb(double n){
	return n * n;
}
int main(void){

int nm,ans;
double xa,ya,ra,xb,yb,rb;

	cin >> nm;
//		if(nm == 0) break;
		rep(i,nm){
			cin >> xa >> ya >> ra;
			cin >> xb >> yb >> rb;
			
			double xy = sqrt(tb(xa-xb) + tb(ya-yb));
			if( xy > ra+rb) ans = 0;
			else if( xy + rb < ra ) ans = 2;
			else if( xy + ra < rb ) ans = -2;
			else ans = 1;
			cout << ans << endl;
		}
	
	return 0;
}