#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	vector<int> a(3);
	while(true)
	{
		cin >> a[0] >> a[1] >> a[2];
		if(a[0] == 0 && a[1] == 0 && a[2] == 0) break;

		sort(a.begin(),a.end());
		int d = a[0]*a[0] + a[1]*a[1];

		int n;
		cin >> n;
		rep(i,n)
		{
			int r;
			cin >> r;

			if(d < (r*2)*(r*2))
			{
				cout << "OK" << endl;
			}
			else
			{
				cout << "NA" << endl;
			}
		}
	}
	return 0;
}