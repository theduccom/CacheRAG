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
	vector<int> H(5);
		while(~scanf("%d,%d,%d,%d,%d", &H[0] ,&H[1] ,&H[2] ,&H[3] ,&H[4]))
		{
			vector<int> L(32, 0);
			int kind = 0;
			for(int i = 0; i < 5; i++)
			{
				if(L[H[i]-1] == 0)
				{
					kind++;
				}
				L[H[i]-1]++;
			}

			if(kind == 2)
			{
				int mx = *max_element(L.begin(), L.end());
				if(mx == 4)
				{
					cout << "four card" << endl;
					continue;
				}
				else if(mx == 3)
				{
					cout << "full house" << endl;
					continue;
				}
				cout << "error 1" << endl;
			}
			else if(kind == 5)
			{
				bool straight = false;
				for(int i = 0; i <= 10; i++)
				{
					L[13] = L[0];
					if(L[i] && L[i+1] && L[i+2] && L[i+3] && L[i+4])
					{
						straight = true;
					}
				}
				if(straight)
				{
					cout << "straight" << endl;
					continue;
				}
				else
				{
					cout << "null" << endl;
					continue;
				}
			}
			else if(kind == 3)
			{
				int mx = *max_element(L.begin(), L.end());
				if(mx == 3)
				{
					cout << "three card" << endl;
					continue;
				}
				else if(mx == 2)
				{
					cout << "two pair" << endl;
					continue;
				}
			}
			else if(kind == 4)
			{
				cout << "one pair" << endl;
				continue;
			}
		}
}