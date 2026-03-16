#include <iostream>

using namespace std;

bool P[10001];

void eratos()
{
	for( int i = 0;i < 10001;i++ ) P[i] = true;
	P[0] = P[1] = false;
	for( int i = 2;i * i < 10001;i++ ){
		if( P[i] ) for( int j = 2;i * j < 10001;j++ ) P[i * j] = false;
	}
}

int main(int argc, char const* argv[])
{
	int n;

	eratos();
	while( cin >> n && n != 0 ){
		for( int i = n;i >= 0;i-- ){
			if( P[i] && P[i - 2] ){
				cout << i - 2 << " " << i << endl;
				break;
			}
		}
	}

	return 0;
}