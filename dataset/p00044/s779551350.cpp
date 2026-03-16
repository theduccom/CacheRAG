#include <iostream>

using namespace std;

bool P[1000001];

void eratos()
{
	for( int i = 0;i < 1000001;i++ ) P[i] = true;
	P[0] = P[1] = false;
	for( int i = 0;i < 1000001;i++ ){
		if( P[i] ) for( int j = 2;j * i < 1000001;j++ ) P[i * j] = false;
	}
}

int main(void)
{
	int n;

	eratos();
	while( cin >> n ){
		for( int i = n - 1;;i-- ){
			if( P[i] ){ cout << i;
			break;}
		}
		for( int i = n + 1;;i++ ){
			if( P[i] ){ cout << " " << i << endl;
			break;}
		}
	}

	return 0;
}