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
		while( true )
		{
			REP( i, (int)S.size() )
			{
				if( S[ i ] != ' ' && S[ i ] != '.' )
				{
					if( S[ i ] == 'z' )
					{
						S[ i ] = 'a';
						continue;
					}
					S[ i ]++;
				}
			}
			if( S.find( "the" ) != string::npos || S.find( "this" ) != string::npos || S.find( "that" ) != string::npos )
			{
				break;
			}
		}
		cout << S << endl;
	}
	return 0;
}