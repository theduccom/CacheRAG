#include <iostream>
#include <vector>
#include <utility>
#include <cmath>

using namespace std;
#define mp make_pair
#define pb push_back

vector<pair<double, double>> vs;

// ベクトルを受け取りその長さ(大きさ)を返す
double length(pair<double, double> p) {
	return sqrt(pow(p.first, 2) + pow(p.second, 2));
}

// 3点を受け取り、その3点が作る三角形の面積を返す
double area(pair<double, double> p1, pair<double, double> p2, pair<double, double> p3) {
	pair<double, double> p12 = mp(p1.first - p2.first, p1.second - p2.second);
	pair<double, double> p13 = mp(p1.first - p3.first, p1.second - p3.second);
	pair<double, double> p32 = mp(p3.first - p2.first, p3.second - p2.second);
	double a = length(p12);
	double b = length(p13);
	double c = length(p32);
	double z = (a + b + c) / 2;
	double S = sqrt(z * (z-a) * (z-b) * (z-c));
	return S;
}


int main(void) {
	double x, y;
	while(~scanf("%lf, %lf", &x, &y)) {
		pair<double, double> p = mp(x, y);
		vs.pb(p);
	}
	
	double sum = 0;
	for (int i = 1; i < vs.size() - 1; i++) {
		sum += area(vs[0], vs[i], vs[i+1]);
	}

	//for (auto v : vs) {
	//	cout << "(" <<  v.first << "," << v.second << ")" << endl;
	//}

	cout << sum << endl;

}

