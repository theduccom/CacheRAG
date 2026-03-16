//0046
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
	vector<double> v;
	double height;
	while(cin >> height)
	{
		v.push_back(height);
	}
	sort(v.begin(), v.end());
	cout << (v.back()-v[0]) << endl;
	return 0;
}