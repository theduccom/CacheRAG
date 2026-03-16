#include <iostream>
#include <cmath>

using namespace std;

double judge(double, double, double, double, double, double);

int main() {

	double xa, ya, ra, xb, yb, rb, N, ans;

	cin >> N;

	for(int i=0; i<N; i++) {
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		ans=judge(xa, ya, ra, xb, yb, rb);
		cout << ans << endl;
	}

	return 0;

}

double judge(double xa, double ya, double ra, double xb, double yb, double rb) {

	double d=sqrt(pow(xa-xb, 2)+pow(ya-yb, 2));

	if(ra+rb<d)
		return 0;
	else if(abs(ra-rb)>d)
		return ra>rb ? 2 : -2;
	else
		return 1;

}