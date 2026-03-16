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
#define EPS 1e-10
#define pb push_back
#define mp make_pair
typedef long long ll;
using namespace std;
typedef pair<int, int> P;

bool isLeap(int y);
ll gcd(ll a, ll b);
ll lcm(ll a, ll b);
double distanceAB(double xa, double ya, double xb, double yb);
void trace(int A[], int N);

/*
class Target
{
public:
	vector <string> draw(int n)
	{

	}
};
*/


int acc[1024][1001];


int main()
{
	int n, m;
	while (~scanf("%d%d", &n, &m))
	{
		int road[n][n];
		rep(i, n) rep(j, n) road[i][j] = INF;
		rep(i, m)
		{
			int a, b, c, d;
			scanf("%d,%d,%d,%d", &a, &b, &c, &d);
			road[a - 1][b - 1] = c;
			road[b - 1][a - 1] = d;
		}
		int x1, x2, y1, y2;
		scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
		rep(k, n) rep(i, n) rep(j, n)
		{
			road[i][j] = min(road[i][j], road[i][k] + road[k][j]);
		}
		cout << y1 - y2 - road[x1 - 1][x2 - 1] - road[x2 - 1][x1 - 1] << endl;
	}
	
	return 0;
}


bool isLeap(int y)
{
	return y % 400 == 0
						? true : y % 100 == 0
						? false : y % 4 == 0
						? true : false;
}

ll gcd(ll a, ll b)
{
	return (b > 0) ? gcd(b, a % b) : a;
}

ll lcm(ll a, ll b)
{
	return a / gcd(a, b) * b;
}

void trace(int A[], int N)
{
	REP(N)
	{
		if (i > 0) cout << " ";
		cout << A[i];
	}
	cout << endl;
}

double distanceAB(double xa, double ya, double xb, double yb)
{
	return sqrt((xb-xa)*(xb-xa) + (yb-ya)*(yb-ya));
}