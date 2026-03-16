#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a, b, c;
	while( cin >> a >> b >> c , a || b || c ){
		int n;
		cin >> n;
		for(int i=0 ; i < n ; i++ ){
			int r;
			cin >> r;
			r = 4 * r * r;
			int width = min( a*a+b*b , min(b*b+c*c,c*c+a*a) );
			if( width < r ){
				cout << "OK" << endl;
			}else{
				cout << "NA" << endl;
			}
		}
	}
}