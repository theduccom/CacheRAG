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


int expr();
int term();
int fact();

char buf[101];
int p;

int expr()
{
	int v = term();
	while (buf[p] == '+' || buf[p] == '-')
	{
		if (buf[p] == '+')
		{
			p++;
			v += term();
		} else {
			p++;
			v -= term();
		}
	}
	return v;
}

int term()
{
	int v = fact();
	while (buf[p] == '*' || buf[p] == '/')
	{
		if (buf[p] == '*')
		{
			p++;
			v *= fact();
		} else {
			p++;
			v /= fact();
		}
	}
	return v;
}

int fact()
{
	int v = 0;
	if (buf[p] == '(')
	{
		p++;
		v = expr();
		p++;
	} else {
		while (isdigit(buf[p]))
		{
			v = v * 10 + buf[p] - '0';
			p++;
		}
	}
	return v;
}


int main()
{
	int times, ans;
	
	cin >> times;
	rep(i, times)
	{
		cin >> buf;
		p = 0;
		ans = expr();
		cout << ans << endl;
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