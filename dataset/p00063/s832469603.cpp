#include <iostream>
#include <string>

#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	string s;
	int count = 0;
	while(cin >> s)
	{
		if(s.size() == 1)
		{
			count++;
		}
		else
		{
			bool flag = true;
			rep(i,s.size()/2)
			{
				if(s[i] != s[s.size()-i-1])
				{
					flag = false;
				}
			}

			if(flag == true)
			{
				count++;
			}
		}
	}

	cout << count << endl;

	return 0;
}