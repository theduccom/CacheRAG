#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <complex>
#include <ctime>
#include <cstdlib>

using namespace std;

inline int to_int(string s) {int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string to_str(T x) {ostringstream sout; sout << x; return sout.str();}

typedef long long ll;

int main()
{
	char ans = '0', wk;
	int F[16][16];
	while(cin >> wk)
	{
		memset(F, 0, sizeof(F));
		if(wk == '\n')
		{
			continue;
		}
		F[0][0] = wk - '0';
		ans = '0';


		for(int i = 0; i < 8; i++)
		{
			for(int j = 0; j < 8; j++)
			{
				if(i == 0 && j == 0)
					continue;
				cin >> wk;
				F[i][j] = wk - '0';
			}
		}

		for(int i = 0; i < 8; i++)
		{
			for(int j = 0; j < 8; j++)
			{
				if(F[i][j] && F[i][j+1] && F[i+1][j] && F[i+1][j+1])
				{
					ans = 'A';
					break;
				}
				if(F[i][j] && F[i+1][j] && F[i+2][j] && F[i+3][j])
				{
					ans = 'B';
					break;
				}
				if(F[i][j] && F[i][j+1] && F[i][j+2] && F[i][j+3])
				{
					ans = 'C';
					break;
				}
				if(F[i][j] && F[i+1][j] && F[i+1][j-1] && F[i+2][j-1])
				{
					ans = 'D';
					break;
				}
				if(F[i][j] && F[i][j+1] && F[i+1][j+1] && F[i+1][j+2])
				{
					ans = 'E';
					break;
				}
				if(F[i][j] && F[i+1][j] && F[i+1][j+1] && F[i+2][j+1])
				{
					ans = 'F';
					break;
				}
				if(F[i][j] && F[i][j+1] && F[i-1][j+1] && F[i-1][j+2])
				{
					ans = 'G';
					break;
				}
			}
			if(ans != '0')
			{
				break;
			}
		}

		cout << ans << endl;
	}
}