#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
	int n;
	int data[12][12];

	while( cin >> n && n != 0 ){
		for( int i = 0;i < n;i++ ){
			for( int j = 0;j < n;j++ ){
				cin >> data[i][j];
			}
		}

		int sum = 0;
		for( int i = 0;i < n;i++ ){
			sum = 0;
			for( int j = 0;j < n;j++ ){
				sum += data[i][j];
			}
			data[i][n] = sum;
		}
		for( int i = 0;i < n + 1;i++ ){
			sum = 0;
			for( int j = 0;j < n;j++ ){
				sum += data[j][i];
			}
			data[n][i] = sum;
		}

		for( int i = 0;i < n + 1;i++ ){
			for( int j = 0;j < n + 1;j++ ){
				cout.width( 5 );
				cout << data[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}