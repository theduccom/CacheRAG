#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	double a;
	vector<double> r;
	while(cin >> a)
	{
		double sum = 0;
		for (int i=0; i<10; i++)
		{
			sum+=a;
			if (i%2)
			{
				a/=3;
			} else {
				a*=2;
			}
		}
		r.push_back(sum);
	}
	cout << setprecision(10);
	for (int i=0; i<r.size(); i++)
	{
		cout << r[i] << endl;
	}
}