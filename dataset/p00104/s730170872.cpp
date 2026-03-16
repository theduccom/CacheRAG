#include <iostream>
#include <string>
#include <cstring>
#include <vector>

#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int n,m;
	string f[101];
	while(true)
	{
		cin >> n >> m;
		if(n == 0 && m == 0) break;

		rep(i,n)
		{
			cin >> f[i];
		}

		int i = 0, j = 0;
		int memo[101][101];
		memset(memo,0,sizeof(memo));
		while(f[i][j] != '.' && memo[i][j] == 0)
		{
			memo[i][j]++;

			if(f[i][j] == '>')
			{
				j++;
			}
			else if(f[i][j] == '<')
			{
				j--;
			}
			else if(f[i][j] == 'v')
			{
				i++;
			}
			else if(f[i][j] == '^')
			{
				i--;
			}
		}

		if(memo[i][j] == 0)
		{
			cout << j << " "  << i << endl;
		}
		else
		{
			cout << "LOOP" << endl;
		}


	}
	return 0;
}