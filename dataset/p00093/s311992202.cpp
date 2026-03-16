#include <iostream>
#include <vector>
using namespace std;
bool isLeap(int year)
{
	if (year % 400 == 0) return true;
	if (year % 100 == 0) return false;
	return year % 4 == 0;
}
int main()
{
	int a, b, k = 0;
	while (cin >> a >> b) {
		if (a == 0 && b == 0) break;
		if (k++) cout << endl;
		vector<int> res;
		for (int i=a; i<=b; ++i) if (isLeap(i)) res.push_back(i);
		if (res.empty()) {
			cout << "NA" << endl;
		}
		else {
			for (int i=0; i<res.size(); ++i) cout << res[i] << endl;
		}
	}
	return 0;
}