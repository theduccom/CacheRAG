#include<iostream>
#include<cmath>
using namespace std;
int main(void){
	while( true ){
		int n;
		int x,y,z;
		
		cin >> x >> y >> z;
		if( x==0&&y==0&&z==0 ) break;
		cin >> n;

		for(int i = 0; i < n; i++){
			int r;
			
			cin >> r;
			if( sqrt((double)x*x+y*y) < 2*r ||
				sqrt((double)x*x+z*z) < 2*r ||
				sqrt((double)y*y+z*z) < 2*r ) cout << "OK\n";
			else cout << "NA\n";
		}
	}
	return 0;
}