#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Town
{
public:
	Town() : totalCost( 0 ), isGoal( false ), isThrough( false ){}
	~Town(){}

	void clear(){
		totalCost = 0;
		isGoal = false;
		isThrough = false;
	}

	vector< pair< int, int > > routes;
	int totalCost;
	bool isGoal;
	bool isThrough;
};

int startToGoal( Town* towns, int start, int goal )
{
	int move = start;
	towns[ goal ].isGoal = true;
	vector< pair< int, pair< int, int > > > gotoList;

	while( !towns[ move ].isGoal ){
		towns[ move ].isThrough = true;
		int count = towns[ move ].routes.size();
		for( int i = 0; i < count; ++i ){
			gotoList.push_back( make_pair( move, towns[ move ].routes[ i ] ) );
		}
		int minCost = INT_MAX;
		int here, go, c;
		vector< pair< int, pair< int, int > > >::iterator itr = gotoList.begin();
		while( itr != gotoList.end() ){
			here = itr->first;
			go = itr->second.first;

			if( towns[ go ].isThrough ){
				itr = gotoList.erase( itr );
				continue;
			}

			c = towns[ here ].totalCost + itr->second.second;
			if( c < minCost ){
				minCost = c;
				move = go;
			}
			++itr;
		}
		towns[ move ].totalCost = minCost;
	}
	return towns[ move ].totalCost;
}

int main()
{
	int n, m;
	int a, b, c, d;
	int bugget, cost;
	int home, turn;

	cin >> n;
	cin >> m;

	Town* towns = new Town[ n + 1 ];

	char dummy;
	for( int i = 0; i < m; ++i ){
		cin >> a >> dummy >> b >> dummy >> c >> dummy >> d;
		towns[ a ].routes.push_back( make_pair( b, c ) );
		towns[ b ].routes.push_back( make_pair( a, d ) );
	}

	cin >> home >> dummy >> turn >> dummy >> bugget >> dummy >> cost;

	cost += startToGoal( towns, home, turn );

	for( int i = 0; i < n + 1; ++i ){
		towns[ i ].clear();
	}

	cost += startToGoal( towns, turn, home );

	cout << bugget - cost << endl;

	delete[] towns;

	return 0;
}