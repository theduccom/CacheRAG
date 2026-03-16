#include<bits/stdc++.h>
using namespace std;

int main(){
	int x, h;
	while(cin >> x >> h, x!=0 && h!=0){
		double s1 = (double)x * (double)x;
		double e1 = sqrt( (double)x/sqrt(2)*(double)x/sqrt(2) + (double)h*(double)h );
		double e2 = sqrt( e1*e1 - (double)x/2*(double)x/2 );
		double s2 = (double)x * e2 /2;
		printf("%lf\n", s1+4*s2);
	}
} 