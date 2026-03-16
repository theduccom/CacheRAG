#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	while (1) 
	{
		vector<int>a(3);
		cin >> a[0] >> a[1] >> a[2];
		if (a[0] == 0 && a[1] == 0 && a[2] == 0)break;
		int b;
		cin >> b;
		sort(a.begin(), a.end());
		for (int c = 0; c < b; c++) {
			int d;
			cin >> d;
			if (a[0]*a[0]+a[1]*a[1]<d*d*4)cout << "OK" << endl;
			else cout << "NA" << endl;
		}
	}
}