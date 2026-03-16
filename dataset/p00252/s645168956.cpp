#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <iomanip>
#include <vector>
#include <queue>
#include <set>
#define PI 3.14159265359
#define INF 99999999;
#define rep(i, n) for(int i=0; i<n; i++)
#define REP(n) rep(i, n)
#define EPS 1e-10
typedef long long ll;
using namespace std;



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
	int b1, b2, b3;
	
	cin >> b1 >> b2 >> b3;
	if (b1 && b2)
	{
		cout << "Open" << endl;
	} else if (b1) {
		cout << "Close" << endl;
	} else if (b2) {
		cout << "Close" << endl;
	} else if (b3) {
		cout << "Open" << endl;
	} else {
		cout << "Close" << endl;
	}
	
	return 0;
}