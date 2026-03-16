#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#include <limits>
#include <cmath>
#include <cfloat>

#define FOR(i,b,n) for(int i=b;i<n;i++)
#define REP(i,b,n) for(i=b;i<n;i++)
#define CLR(mat) memset(mat, 0, sizeof(mat))

using namespace std;

int cup[] = {1, 0, 0};

int main()
{
	char p, q;
	
	while(cin >> p, !cin.eof())
	{
		char c;
		cin >> c;
		cin >> q;
		
		swap(cup[(int)(p - 'A')], cup[(int)(q - 'A')]);
	}
	
	FOR(i, 0, 3)
	{
		if( cup[i] )
		{
			cout << (char)('A' + i) << endl;
			break;
		}
	}
	
	return 0;
}