#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main( void )
{
	int n;
	while ( cin >> n && n != 0 )
	{
		vector <int> visited;
		map <int, long long> profit;
		bool exist = false;
		for ( int i = 0; i < min(n, 4000); i++ )
		{
			int no, p, q;
			cin >> no >> p >> q;

			profit[no] += (long long)p * q;

			if ( find( visited.begin(), visited.end(), no ) == visited.end() && profit[no] >= 1000000L )
			{
				exist = true;
				visited.push_back( no );
			}
		}

		if ( exist )
		{
			for ( vector <int>::iterator it = visited.begin(); it != visited.end(); it++ )
			{
				cout << *it << endl;
			}
		}
		else
			cout << "NA" << endl;
	}

	return 0;
}