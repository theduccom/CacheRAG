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



/*
class Target
{
public:
	vector <string> draw(int n)
	{

	}
};
*/


bool isLeapYear(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				return true;
			}
			return false;
		}
		return true;
	} else {
		return false;
	}
}


int main()
{
	int a, b;
	bool first_flag = true;
	
	while (cin >> a >> b, a || b)
	{
		if (first_flag)
		{
			first_flag = false;
		} else {
			cout << endl;
		}
		
		bool flag = false;
		
		for (int y=a; y<=b; y++)
		{
			if (isLeapYear(y))
			{
				cout << y << endl;
				flag = true;
			}
		}
		
		if (!flag) cout << "NA" << endl;
	}
	
	return 0;
}