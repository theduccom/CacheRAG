#include <iostream>

using namespace std;

const int Max = 1000000;
bool P[Max];

void eratos()
{
	for( int i = 0;i < Max;i++ ) P[i] = true;
	P[0] = P[1] = false;
	for( int i = 2;i * i < Max;i++ ) if( P[i] ) for( int j = 2;i * j < Max;j++) P[i * j] = false;
}
int main(int argc, char const* argv[])
{
	int n;
	eratos();

	while( cin >> n && n != 0 ){
		int answer = 0;

		for( int i = 2;i <= n/2;i++ ){
			if( P[i] == true && P[n - i] == true ){ answer++;}
		}

		cout << answer << endl;
	}
	return 0;
}