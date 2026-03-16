#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <functional>
#include <iomanip>
#include <vector>
#include <queue>
#include <set>
#include <typeinfo>
#define PI 3.14159265359
#define INF 99999999;
#define rep(i, n) for(int i=0; i<n; i++)
#define REP(n) rep(i, n)
#define EPS 1e-10
typedef long long ll;
using namespace std;
typedef pair<int, int> P;

double distanceAB(double xa, double ya, double xb, double yb);

/*
class Target
{
public:
	vector <string> draw(int n)
	{

	}
};
*/



int main()
{
	int n;
	double xa, ya, ra, xb, yb, rb;
	double dist, rsum;
	
	cin >> n;
	REP(n)
	{
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		dist = distanceAB(xa, ya, xb, yb);
		rsum = ra + rb;
		if (dist > rsum)
		{
			cout << 0 << endl;
		} else if (fabs(ra - rb) > dist) {
			//円が含まれている場合
			if (ra > rb)
			{
				cout << 2 << endl;
			} else {
				cout << -2 << endl;
			}
		} else {
			cout << 1 << endl;
		}
	}
	
	return 0;
}



double distanceAB(double xa, double ya, double xb, double yb)
{
	return sqrt((xb-xa)*(xb-xa) + (yb-ya)*(yb-ya));
}