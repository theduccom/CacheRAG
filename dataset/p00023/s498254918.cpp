#include<iostream>
#include<cmath>
using namespace std;
double a, b, c, d, e, f;
short int solve() {
	double dis = sqrt((a - d)*(a - d)+(b - e)*(b - e));
	if (dis > c + f)return 0;
	else if (dis < c - f)return 2;
	else if (dis < f - c)return -2;
	else return 1;
}
int main() {
	size_t n; cin >> n;
	for (size_t i = 0; i < n; i++){
		cin >> a >> b >> c >> d >> e >> f;
		cout << solve() << endl;
	}
}