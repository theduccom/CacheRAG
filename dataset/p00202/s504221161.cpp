#include <iostream>

using namespace std;

bool budget[1000001];
bool P[1000001];

void eratos()
{
	for( int i = 0;i < 1000001;i++ ) P[i] = true;
	P[0] = P[1] = false;
	for( int i = 0;i < 1000001;i++ ){
		if( P[i] ) for( int j = 2;j * i < 1000001;j++ ) P[i * j] = false;
	}
}

void prim( int n, int x, int *v )
{
	for( int i = 1;i <= n;i++ ) budget[v[i]] = true;

	for( int i = 1;i <= x;i++ ) if( budget[i] ) {
		for( int j = 1;j <= n;j++ ) if( i + v[j] < 1000001 )budget[i + v[j]] = true;
	}
	int i;
	for( i = x;i >= 2;i-- ) if( budget[i] && P[i] ){ cout << i << endl; break;}
	if( i == 1 ) cout << "NA" << endl;
}

int main(int argc, char const* argv[])
{
	int n,x;
	int v[31];

	eratos();

	while( cin >> n >> x && x != 0 ){
		for( int i = 1;i <= n;i++ ) cin >> v[i];
		for( int i = 0;i < 1000001;i++ ) budget[i] = false;

		prim( n, x, v );
	}

	return 0;
}