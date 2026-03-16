#include <bits/stdc++.h>
using namespace std;

double pi = acos(-1);
typedef complex<double> P;
int main(){
	int a,b;
	P p;
	P d = P(0,1);
	while( scanf("%d,%d",&a,&b) != -1 ){
		p += (1.0 * a) * d;
		d *= exp(P(0,-pi*b/180));
		
	}
	cout << (int)p.real() << "\n" << (int)p.imag() << endl;
}