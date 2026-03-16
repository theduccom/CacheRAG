#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	double t;
	vector<double> v;
	while(cin >> t)
	{
		v.push_back(t);
	}
	sort(v.begin(), v.end());

	cout << v.back()-v.front() << endl;
}