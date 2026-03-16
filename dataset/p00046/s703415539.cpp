#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
	vector<double> Vec;
	double height;
	while(cin >> height)
	{
		Vec.push_back(height);
	}
	sort(Vec.begin(), Vec.end());
	cout << Vec[Vec.size() - 1] - Vec[0] << endl;
}

int main()
{
	solve();
	return(0);
}