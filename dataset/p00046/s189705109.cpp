#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
	double a;
	vector<double> Vec;
	while(cin >> a)
	{
		Vec.push_back(a);
	}
	sort(Vec.begin(), Vec.end());
	int size = Vec.size();
	cout << Vec[size - 1] - Vec[0] << endl;
}

int main()
{
	solve();
	return(0);
}