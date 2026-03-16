#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++) 
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
int main()
{
	string S;
	int N;
	multimap<int, string> mp;
	while( cin >> S >> N )
	{
		mp.emplace( make_pair( N, S ) );
	}
	multimap<string, int> mp2;
	for( auto &x: mp ){
		mp2.emplace( make_pair( x.second, x.first ) );
	}
	string tmp;
	for( auto x : mp2 )
	{
		if( x.first == tmp )cout << " ";
		if( x.first != tmp )
		{
			if( !tmp.empty() )
			{
				cout << endl;
			}
			tmp = x.first;
			cout << x.first << endl;
		}
		cout << x.second;
	}
	cout << endl;
	return 0;
}