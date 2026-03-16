#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int n;
	vector<int> r;
	cin >> n;
	for (int i; i<n; i++)
	{
		double xa,ya,ra,xb,yb,rb;
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		if (pow(xa-xb,2)+pow(ya-yb,2) > pow(ra+rb,2))
		{
			r.push_back(0);
		} else if (pow(xa-xb,2)+pow(ya-yb,2) < pow(ra-rb,2)) {
			(ra > rb) ? r.push_back(2) : r.push_back(-2);
		} else {
			r.push_back(1);
		}
	}
	for (int i=0; i<r.size(); i++)
	{
		cout << r[i] << endl;
	}
	return 0;
}