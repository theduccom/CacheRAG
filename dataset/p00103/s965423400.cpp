#include<iostream>
#include<string>
#define RU 5
#define LIMIT 100
using namespace std;

int main () {

	int ru[RU];	

	
	string in;
	int n;
	cin >> n;
	for ( int j=0; j<n; j++ ) {
		for ( int i=0; i<RU; i++ ) {
			ru[i] = 0;
		}
		int out = 0;
		int score = 0;
		while ( true ) {
			cin >> in;
			if ( in.compare("HIT") == 0 ) {
				for ( int i=2; i>=0; i-- ) {
					ru[i+1] = ru[i];
				}
				ru[0] = 1;
				if ( ru[3] != 0 ) {
					score++;
					ru[3] = 0;
				}
			}
			if ( in.compare("HOMERUN") == 0 ) {

				for ( int i=0; i<3; i++ ) {
					if ( ru[i] != 0 )
						score++;
					ru[i] = 0;
				}
				score++;
			}
			if ( in.compare("OUT") == 0 ) {
				//cout << "T OUT" << endl;
				out++;
			}
			if ( out == 3) {
				cout << score << endl;
				break;
			}
		}
	}


}