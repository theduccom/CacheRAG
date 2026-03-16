#include <iostream>
using namespace std;

static const int MAX_ST = 100;
static const int INFTY  = ( 1 << 20 );

pair< int, int > AdjMt[MAX_ST][MAX_ST];	// UndirectedGraph | first : cost, second : time

int Min( const int& left, const int& right ) { return left > right ? right : left; }

int main()
{

	ios::sync_with_stdio( false );	// for speeding up

	int  info_n, sta_n, query_n, depplc, dest, cost, time;
	bool query_meth;

	while( cin >> info_n >> sta_n, info_n || sta_n ) {

		for( int i = 0; i < MAX_ST; i++ ) {
			for( int j = 0; j < MAX_ST; j++ ) AdjMt[i][j].first = AdjMt[i][j].second = INFTY;
		}

		for( int i = 0; i < info_n; i++ ) {

			cin >> depplc >> dest >> cost >> time;
			AdjMt[--depplc][--dest].first = AdjMt[dest][depplc].first  = cost;
			AdjMt[depplc][dest].second    = AdjMt[dest][depplc].second = time;

		}

		// Warshall-Floyd
		for( int k = 0; k < sta_n; k++ ) {
			for( int i = 0; i < sta_n; i++ ) {
				if( AdjMt[i][k].first == INFTY ) continue;
				for( int j = 0; j < sta_n; j++ ) {

					AdjMt[i][j].first  = Min( AdjMt[i][j].first , AdjMt[i][k].first  + AdjMt[k][j].first );
					AdjMt[i][j].second = Min( AdjMt[i][j].second, AdjMt[i][k].second + AdjMt[k][j].second );

				}
			}
		}

		cin >> query_n;
		for( int i = 0; i < query_n; i++ ) {

			cin >> depplc >> dest >> query_meth;
			depplc--; dest--;
			cout << ( !query_meth ? AdjMt[depplc][dest].first : AdjMt[depplc][dest].second ) << endl;

		}

	}

	return 0;

}