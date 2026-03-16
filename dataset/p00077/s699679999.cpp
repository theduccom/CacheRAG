#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++) 
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
int main()
{
	string S;
	while( getline( cin, S ) )
	{
		string res;
		REP( i, (int) S.size() )
		{
			if( S[ i ] == '@' )
			{
				int N = S[ i + 1 ] - '0';
				REP( j, N )
				{
					res += S[ i + 2 ];
				}
				i += 2;
				continue;
			}
			res += S[ i ];
		}
		cout << res << endl;
	}
	return 0;
}