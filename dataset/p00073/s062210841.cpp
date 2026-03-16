#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <queue>
#include <map>
#include <fstream>
#include <array>
#include <utility>
#include <functional>
#include <stack>
#include <math.h>
#include <numeric>
#include <set>

using namespace std;
typedef long long Int;
#define REP(i , x) for(Int i = 0 ; i < x ; ++i)
typedef pair<int, int> P;


int main()
{
	auto f = [](int a,int h)
	{
		return (double)(a*sqrt(4 * h*h + a*a) + a*a);
	};

	int aa, bb;
	while (cin >> aa >> bb, aa&&bb){
		printf("%.6lf\n", f(aa, bb));
	}
	return 0;
}