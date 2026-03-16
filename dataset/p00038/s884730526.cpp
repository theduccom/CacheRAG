#include <iostream>

using namespace std;

enum Direction {R, L, U, D};

bool input(int b[])
{
	char dummy;
	for (int i=0; i<5; i++) {
		if ( !(cin >> b[i]) ) return false;
		if (i<4) cin >> dummy;
	}
	return true;
}

void sort5(int a[])
{
	for (int i=0; i<5; i++) {
		for (int j=4; j>i; j--) {
			if (a[j-1] > a[j]) {
				int tmp = a[j];	a[j] = a[j-1]; a[j-1] = tmp;
			}
		}
	}
}

int main()
{
	int hand[5];
	while ( input(hand) ) {
		sort5(hand);
		if ( hand[0] == hand[3] || hand[1] == hand[4] ) {
			cout << "four card";
		} else if ( (hand[0] == hand[2] && hand[3] == hand[4]) || (hand[0] == hand[1] && hand[2] == hand[4]) ) {
			cout << "full house";
		} else if ( hand[0] + 1 == hand[1] && hand[1] + 1 == hand[2] && hand[2] + 1 == hand[3] && hand[3] + 1 == hand[4] ) {
			cout << "straight";
		} else if ( hand[0] == 1 && hand[1] == 10 && hand[2] == 11 && hand[3] == 12 && hand[4] == 13 ) {
			cout << "straight";
		} else if ( hand[0] == hand[2] || hand[1] == hand[3] || hand[2] == hand[4] ) {
			cout << "three card";
		} else if ( hand[0] == hand[1] && hand[2] == hand[3] || hand[0] == hand[1] && hand[3] == hand[4] || hand[1] == hand[2] && hand[3] == hand[4] ) {
			cout << "two pair";
		} else if ( hand[0] == hand[1] || hand[1] == hand[2] || hand[2] == hand[3] || hand[3] == hand[4]) {
			cout << "one pair";
		} else cout << "null";
		cout << endl;
	}
	
	return 0;
}