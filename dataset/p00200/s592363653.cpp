#include <iostream>

using namespace std;

static const int TYPE_COST =0;
static const int TYPE_TIME =1;
static const int INF =100000000;
static const int MAX_N = 300;
static const int MAX_M = 100;
int C[MAX_M][MAX_M];
int T[MAX_M][MAX_M];

void init(int type, int n);

int main(int argc, char** argv)
{
	while( 1 ){
		int n, m, from, to, c, t, type;
		cin >> n;
		cin >> m;
		if(n==0 && m==0) break;
		init(TYPE_COST, m);
		init(TYPE_TIME, m);
		for(int i=0; i<n; i++)
		{
			cin >> from;
			cin >> to;
			cin >> c;
			cin >> t;
			C[from-1][to-1] = C[to-1][from-1] = c;
			T[from-1][to-1] = T[to-1][from-1] = t;
		}
		
		for(int k=0; k<m; k++){
			for(int i=0; i<m; i++){
				for(int j=0; j<m; j++){
					C[i][j] = min(C[i][j], C[i][k] + C[k][j]);
					T[i][j] = min(T[i][j], T[i][k] + T[k][j]);
				}
			}
		}
		
		cin >> m;
		for(int i=0; i<m; i++){
			cin >> from;
			cin >> to;
			cin >> type;
			if(type == TYPE_COST) cout << C[from-1][to-1] << endl;
			if(type == TYPE_TIME) cout << T[from-1][to-1] << endl;
		}
	}
	
	return 0;
}

void init(int type, int n)
{
	if(type==TYPE_COST){
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				if(i==j) C[i][j] = 0;
				else C[i][j] = INF;
			}
		}
	}
	
	if(type==TYPE_TIME){
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				if(i==j) T[i][j] = 0;
				else T[i][j] = INF;
			}
		}
	}
}