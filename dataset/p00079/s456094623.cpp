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
#include <stack>
#include <set>
#include <typeinfo>
#define PI 3.14159265359
#define INF 99999999
#define rep(i, n) for(int i=0; i<n; i++)
#define REP(n) rep(i, n)
#define pb push_back
#define mp make_pair
typedef long long ll;
using namespace std;
typedef pair<int, int> P;

class Zahyo
{
public:
	double x, y;
	Zahyo() {}
	Zahyo(double x, double y) : x(x), y(y) {}
};

double inp_x, inp_y;
Zahyo tyouten[20];
char comma;

double calc_area(Zahyo x, Zahyo y, Zahyo z)
{
	double a, b, c;
	double zz, S;
	
	a = sqrt(pow(z.x - y.x, 2) + pow(z.y - y.y, 2));
	b = sqrt(pow(z.x - x.x, 2) + pow(z.y - x.y, 2));
	c = sqrt(pow(x.x - y.x, 2) + pow(x.y - y.y, 2));

	zz = (a + b + c) / 2;
	S = sqrt(zz * (zz - a) * (zz - b) * (zz - c));

	//cout << "S = " << S << endl;

	return S;
}

int main()
{
	int i = 0;
	while (cin >> inp_x >> comma >> inp_y)
	{
		tyouten[i].x = inp_x;
		tyouten[i].y = inp_y;
		i++;
	}

	double area_sum = 0;
	for (int j=2; j<=i-1; j++)
	{
		//	cout << "j = " << j << endl;
		area_sum += calc_area(tyouten[0], tyouten[j-1], tyouten[j]);
	}

	printf("%.6lf\n", area_sum);
	
	return 0;
}