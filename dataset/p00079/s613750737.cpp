#include <iostream>
#include <iomanip>
#include <complex>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;
typedef complex<double> com;

double tri(com a, com b) //triangle size
{
	return(conj(a)*b).imag() / 2;
}
struct cou {
	bool operator()(com a, com b) {
		return tri(a, b)<0;
	}
}; //Counterclockwise

priority_queue<com, vector<com>, cou> n; //node
double x, y, xo, yo;
double S = 0;
char s;
com a;

int main()
{
	cout.setf(ios::fixed);
	cin >> xo >> s >> yo;
	while (cin >> x >> s >> y)
	{
		n.push(com(x - xo, y - yo));
	}
	while (!n.empty())
	{
		a = n.top();
		n.pop();
		if (n.empty()) break;
		S += tri(a, n.top());
	}
	cout << setprecision(8) << S << endl;
	return 0;
}
