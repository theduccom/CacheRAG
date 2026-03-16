#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main()
{
	while ( true )
	{
		int n; cin>>n;
		if ( n == 0 )
			break;
		vector<pair<int,long long> > E;

		for ( int i=0; i<n; i++ )
		{
			int a, b, c;
			cin>>a>>b>>c;
			int j;
			for ( j=0; j<(int)E.size(); j++ )
				if ( E[j].first==a )
					break;
			if ( j==(int)E.size() )
				E.push_back( make_pair(a,0ll) );
			E[j].second += (long long)b*c;
		}
		bool f = false;
		for ( int i=0; i<(int)E.size(); i++ )
			if ( E[i].second >= 1000000 )
				cout << E[i].first << endl,
				f = true;
		if ( ! f )
			cout << "NA" << endl;
	}
}