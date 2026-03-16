#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int card[5];
	int yaku[15] = {0};
	
	while ( ~scanf ("%d,%d,%d,%d,%d",&card[0],&card[1],&card[2],&card[3],&card[4]) ){
		for ( int i = 1; i < 15; i++ ) {
			yaku[i] = 0;
		}
		
		for ( int i = 0; i < 5; i++ ) {
			if ( card[i] == 1 ) yaku[14]++;
			yaku[card[i]]++;
		}
		
		/*for ( int i = 1; i < 15; i++ ) {
			if ( yaku[i] > 0 ) {
				cout << i << " " << yaku[i] << endl;
			}
		}*/
		
		for ( int i = 1; i < 15; i++ ) {
			if ( yaku[i] == 4 ){
				cout << "four card" << endl;
				goto END;
			} else if ( yaku[i] == 3 ) {
				for ( int j = 1; j < 14; j++ ) {
					if ( yaku[j] == 2 ) {
						cout << "full house" << endl;
						goto END;
					}
				}
			} else if ( yaku[i] == 1 ) {
				for ( int j = 1; j < 5; j++ ) {
					if ( yaku[i + j] != 1 )
						break;
					else if ( j == 4 ) {
						cout << "straight" << endl;
						goto END;
					}
				}
			}
		}
		for ( int i = 1; i < 15; i++ ) {
			if ( yaku[i] == 3 ) {
				cout << "three card" << endl;
				goto END;
			} else if ( yaku[i] == 2 ) {
				for ( int j = i + 1; j < 14; j++ ) {
					if ( yaku[j] == 2 ) {
						cout << "two pair" << endl;
						goto END;
					}else if ( j == 13 ){
						cout << "one pair" << endl;
						goto END;
					}
				}
			}
		}
		cout << "null" << endl;
		END:;
	}
}