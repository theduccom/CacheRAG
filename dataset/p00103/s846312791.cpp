#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int count = 0,out = 0;
		int home[4];
		memset(home,0,sizeof(home));
		while(out != 3)
		{
			string s;
			cin >> s;

			if(s == "OUT")
			{
				out++;
			}
			else if(s == "HIT")
			{
				if(home[2] == 1)
				{
					home[2]--;
					home[3]++;
				}
				if(home[1] == 1)
				{
					home[1]--;
					home[2]++;
				}
				if(home[0] == 1)
				{
					home[0]--;
					home[1]++;
				}

				home[0]++;
			}
			else if(s == "HOMERUN")
			{
				if(home[2] == 1)
				{
					home[2]--;
					home[3]++;
				}
				if(home[1] == 1)
				{
					home[1]--;
					home[3]++;
				}
				if(home[0] == 1)
				{
					home[0]--;
					home[3]++;
				}
				home[3]++;
			}
		}
		count = home[3];
		cout << count << endl;
	}
	return 0;
}