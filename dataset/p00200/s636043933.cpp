#include <iostream>
#include <vector>
using namespace std;

#define NONE -1

vector < vector <int> > C;
vector < vector <int> > T;
vector < vector <int> > E;

int main( void )
{
	int n, m;
	while ( cin >> n >> m && n && m )
	{
		// ツ渉可甘コツ可サ
		C = vector < vector <int> > ( m, vector <int>(m,NONE) );
		T = vector < vector <int> > ( m, vector <int>(m,NONE) );
		E = vector < vector <int> > ( m );
		for ( int i = 0; i < n; i++ )
		{
			int a, b, cost, time;
			cin >> a >> b >> cost >> time;
			a--;
			b--;
			C[a][b] = C[b][a] = cost;
			T[a][b] = T[b][a] = time;
			E[a].push_back(b);
			E[b].push_back(a);
		}

		// floyd for cost
		for ( int k = 0; k < m; k++ ) for ( int i = 0; i < m; i++ ) for ( int j = 0; j < m; j++ )
		{
			if ( C[i][k] != NONE && C[k][j] != NONE )
			{
				if ( C[i][j] == NONE || C[i][k] + C[k][j] < C[i][j] )
				{
					C[i][j] = C[i][k] + C[k][j];
				}
			}
		}

		// floyd for time
		for ( int k = 0; k < m; k++ ) for ( int i = 0; i < m; i++ ) for ( int j = 0; j < m; j++ )
		{
			if ( T[i][k] != NONE && T[k][j] != NONE )
			{
				if ( T[i][j] == NONE ||  T[i][k] + T[k][j] < T[i][j] )
				{
					T[i][j] = T[i][k] + T[k][j];
				}
			}
		}



		// ツ姪「ツつ「ツ債づュツつケ
		int k;
		cin >> k;
		for ( int i = 0; i < k; i++ )
		{
			int p, q, r;
			cin >> p >> q >> r;
			int s = p - 1;
			int g = q - 1;
			if ( r )
				cout << T[s][g] << endl;
			else
				cout << C[s][g] << endl;
		}

	}

	return 0;
}