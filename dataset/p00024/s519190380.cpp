#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	double v;
	vector<int> r;
	while(scanf("%lf",&v) != EOF)
	{
		r.push_back(int(floor(v*v/98))+2);
	}
	for (int i=0; i<r.size(); i++)
	{
		cout << r[i] << endl;
	}
	return 0;
}