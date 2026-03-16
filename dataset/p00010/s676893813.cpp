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
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		double x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		double a = -x1 + x2, b = -y1 + y2, c = (-pow(x1, 2) - pow(y1, 2) + pow(x2, 2) + pow(y2, 2)) / 2;
		double d = -x1 + x3, e = -y1 + y3, f = (-pow(x1, 2) - pow(y1, 2) + pow(x3, 2) + pow(y3, 2)) / 2;
		double y = (c*d - a*f) / (b*d - a*e);
		double x = (f - e*y) / d;
		cout <<fixed<<setprecision(3)<< x << " " << y <<" "<< hypot(x1 - x, y1 - y) << endl;
	}
}