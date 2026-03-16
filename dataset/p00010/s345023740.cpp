#include <iostream>
#include <iomanip>
#include <complex>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

const double EPS = 1e-10;
const double INF = 1e12;
#define EQ(n,m) (abs((n)-(m)) < EPS)
#define X real()
#define Y imag()

typedef complex<double> P;
typedef vector<P> VP;
struct L : VP{
    L(const P& a, const P& b){ resize(2); at(0)=a; at(1)=b; }
    L(){ resize(2); }
};
double dot(P a, P b){
    return (conj(a)*b).X;
}
double cross(P a, P b){
    return (conj(a)*b).Y;
}

P crosspointLL(const L &l, const L &m) {
  double A = cross(l[1]-l[0], m[1]-m[0]);
  double B = cross(l[1]-l[0], l[1]-m[0]);
  return m[0] + B /A *(m[1]-m[0]);
}

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		VP v(3);
		for(int j=0; j<3; j++){
			double x,y;
			cin >> x >> y;
			v[j]=P(x, y);
		}
		L ort1( (v[0]+v[1])*0.5, (v[0]+v[1])*0.5 +(v[1]-v[0])*P(0,1) );
		L ort2( (v[1]+v[2])*0.5, (v[1]+v[2])*0.5 +(v[2]-v[1])*P(0,1) );
		P cp = crosspointLL(ort1, ort2);
		cout << fixed;
		cout << setprecision(3);
		cout << cp.X << " " << cp.Y << " " << abs(cp-v[0]) << endl;
	}
	return 0;
}