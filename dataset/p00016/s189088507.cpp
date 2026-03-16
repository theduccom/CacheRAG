# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
# include <stack>
# include <queue>
# include <list>
using namespace std;
using LL = long long;
constexpr int MOD = 1000000000 + 7;
//?¶????????????????????????????????????§??????????????????????¢????????????????
constexpr int INF = 2000000000;
const double PI = acos(-1);

int main() {
	double x = 0.0, y = 0.0;
	int d, a;
	int ca = 90;
	char c;
	cin >> d >> c >> a;

	do {
		x += d * cos(ca / 180.0 * PI);
		y += d * sin(ca / 180.0 * PI);
		ca -= a;
		cin >> d >> c >> a;

	} while (d != 0 || a != 0);
	//cout << fixed << setprecision(0) << x << endl << y << endl;
	cout << int(x) << endl << int(y) << endl;
}