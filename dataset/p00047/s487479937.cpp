#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>

#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;


int main()
{
	string s;
	int a[3] = {1,0,0};

	while(cin >> s)
	{
		int d = s[0] - 'A';
		int d2 = s[2] - 'A';
		swap(a[d],a[d2]);
	}

	rep(i,3)
	{
		if(a[i] == 1)
		{
			cout << (char)(i + 'A') << endl;
		}
	}
	return 0;
}