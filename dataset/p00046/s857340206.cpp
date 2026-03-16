#include <string>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <queue>
#include <set>
#include <utility>
#include <algorithm>
#include <numeric>
#include <iostream>

using namespace std;
template<class T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }

int main()
{
	vector<double> v;
	double d;
	while(cin>>d) v.push_back(d);
	printf("%.2lf",*max_element(v.begin(),v.end()) - *min_element(v.begin(),v.end()));
}