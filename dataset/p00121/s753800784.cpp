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



int main()
{
	int vec[] = {1, -1, 4, -4};
	queue<string> que;
	map<string, int> d;
	
	que.push("01234567");
	while (!que.empty())
	{
		string str = que.front(); que.pop();
		int zero = str.find("0");
		string str2;
		rep(i, 4)
		{
			int next_z;
			next_z = zero + vec[i];
			if (next_z>=0 && next_z<=7 && !((zero==3 && next_z==4) || (zero==4 && next_z==3)))
			{
				str2 = str;
				swap(str2[zero], str2[next_z]);
				if (d.find(str2) == d.end())
				{
					que.push(str2);
					d[str2] = d[str] + 1;
				}
			}
		}
	}
	
	string num;
	while (getline(cin, num))
	{
		string::iterator end_it = remove(num.begin(), num.end(), ' ');
		num.erase(end_it, num.end());
		cout << d[num] << endl;
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