#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#define rep(i,a,n) for(int i=a;i<n;i++)
using namespace std;

int main(void){
	double x1,x2,y1,y2,r1,r2;
	int n;
	cin >> n;
	rep(i,0,n){
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2 ;
		x1 = sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
		
		if(r1 > x1 + r2){
			cout << 2;
		}
		else if(r2 > x1 + r1){
			cout << -2;
		}
		else if(r1 + r2 < x1){
			cout << 0;
		}
		else{
			cout << 1;
		}
		cout << "\n";
	}
	return 0;
}