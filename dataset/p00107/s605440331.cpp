#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b,c,n,r,R;
	while( cin >> a >> b >> c , a || b || c ){
		cin >> n;
		for(int i=0 ; i < n ; i++ ){
			bool ans = true;
			cin >> r;
			R = min( min( sqrt(a*a+b*b),sqrt(b*b+c*c) ),sqrt(c*c+a*a) );
			if( 2*r <= R ) ans = false;
			cout << (ans?"OK":"NA") << endl;
		}
	}
}