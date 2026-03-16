#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n, x, y, z, r;
	while( cin >> z >> x >> y, x||y||z ){
		cin >> n;
		int i=0;
		for( i=0; i<n; i++ ){
			cin >> r;
			int l = min( x*x+y*y, y*y+z*z );
			l = min( l, z*z+x*x );
			cout << ((4*r*r>l)?"OK":"NA") << endl;
		}
	}
	return 0;
}