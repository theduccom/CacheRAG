#include<iostream>
#include<cmath>
#define PLEN 1000010
using namespace std;

int gcm ( int a, int b ) {
	int temp;

	while ( a != 0 ) {
		
		temp = a-b;
		a = b;
		b = temp;
	}
	return b;
}
		

int dish[30];
bool oprime[PLEN];
bool data[PLEN];

int main () {

	for ( int i=0; i<PLEN; i++ ) {
		oprime[i++] = false;
		oprime[i] = true;
	}

	oprime[2] = true;

	int limit;
	limit = (int)(sqrt((double)PLEN));

	for ( int i=3; i<limit; i+=2 ) {
		for ( int j=1; j<PLEN; j+=2 ) {
				if ( j != i ) {
				if ( (j % i) == 0 ) {
						oprime[j] = false;
				}
			}
		}
	}

	oprime[1] = false;

	//cout << "Start" << endl;
	
	while(true) {
		int dishNum;
		cin >> dishNum;

		int budget;
		cin >> budget;

		if ( dishNum == 0 )
			break;


		for ( int i=0; i<=budget; i++ ) {
			data[i] = false;
		}


		for ( int i=0; i<dishNum; i++ ) {
			cin >> dish[i];
			data[dish[i]] = true;
		}

		int count = 1;

		while ( true ) {
			bool done = false;

			for ( int i=0; i<=budget; i++ ) {
				if ( data[i] ) {
					for ( int j=0; j<dishNum; j++ ) {
						if ( i + dish[j] <= budget ) {
							if ( !data[i+dish[j]] ) {
								data[i+dish[j]] = true;
								done = true;
							}
						}
					}
				}
			}

			//cout << "Pass" << count++ << endl;

			if ( !done )
				break;
		}
		/*
		for ( int i=0;i<=budget; i++ ) {
			if ( data[i] )
				{
					if ( i%10 )
						//cout << i << endl;
				}
		}
		*/
		int answer = 0;

		for ( int i=0; i<=budget; i++ ) {
			if ( data[i] ) {
				if ( oprime[i] ) {
					//cout << "S" << i << endl;
					if ( answer < i )
						answer = i;
				}
			}
		}
		
		if ( answer != 0 )
			cout << answer << endl;
		else
			cout << "NA" << endl;
	}
}