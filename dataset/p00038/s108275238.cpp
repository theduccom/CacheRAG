#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int scard, card[20], full, str, straight;
	
	while (scanf("%d", &scard) != EOF){
		full = str = straight = 0;
		for (int i = 0; i < 15; i++) card[i] = 0;
		card[scard - 1]++;
		for (int i = 1; i < 5; i++){
			scanf(",%d", &scard);
			card[scard - 1]++;
		}
		for (int i = 0; i < 13; i++){
			str = 0;
			if (card[i] == 4) full = 100;
			if (card[i] == 3) full += 3;
			if (card[i] == 2) full += 2;
			if (card[i] == 1) {
				for (int j = i; j < i + 5; j++){
					if (j == 13 && card[0] == 1) str++;
					if (card[j] == 1) str++;
					if (str == 5) straight = 1;
				}
			}
		}
		if (full == 100) cout << "four card" << endl;
		else if (full == 5) cout << "full house" << endl;
		else if (straight == 1) cout << "straight" << endl;
		else if (full == 3) cout << "three card" << endl;
		else if (full == 4) cout << "two pair" << endl;
		else if (full == 2) cout << "one pair" << endl;
		else cout << "null" << endl;
	}
	return(0);
}