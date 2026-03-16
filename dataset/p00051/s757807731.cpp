#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <algorithm>

#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
using namespace std;


int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		string s;
		int num_min = 0,num_max = 0;
		cin >> s;
		vector<int> a;

		rep(i,s.size())
		{
			a.pb((int)(s[i] - '0'));
		}

		sort(a.begin(),a.end());

		
		int count = 1;
		rep(i,a.size())
		{
			num_max += a[i]*count;
			num_min += a[a.size() - i - 1]*count;
			count *= 10;
		}

		cout << num_max - num_min << endl;
	}
	return 0;
}