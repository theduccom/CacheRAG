#include <iostream>
#include <vector>

using namespace std;

const int Max = 1000000;
bool P[Max];

void eratos(){
	for( int i = 0;i < Max;i++ ) P[i] = true;
	P[0] = P[1] = false;
	for( int i = 2;i * i < Max;i++ ) if( P[i] ) for( int j = 2;i * j < Max;j++ ) P[i * j] = false;
}
int main(int argc, char const* argv[])
{
	eratos();
	vector<int> data;

	for( int i = 0;i < Max;i++ ) if( P[i] ) data.push_back( i );

	int n;

	while( cin >> n && n != 0 ){
		unsigned int j = 0;
		for( int i = 0;i < n;i++ ) j += data[i];
		cout << j << endl;
	}
	
	return 0;
}