#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int ar[5];
	while (scanf("%d,%d,%d,%d,%d", &ar[0], &ar[1], &ar[2], &ar[3], &ar[4])+1) {
		sort(ar, ar + 5);
		int a = ar[0];
		int b = ar[1];
		int c = ar[2];
		int d = ar[3];
		int e = ar[4];

		if (a == d || b == e) { cout << "four card" << endl; }
		else if (a == c && d == e) { cout << "full house" << endl; }
		else if (a == b && c == e) { cout << "full house" << endl; }
		else if (b - a == 1 && c - b == 1 && d - c == 1 && e - d == 1) { cout << "straight" << endl; }
		else if (a == 1 && b == 10 && c == 11 && d == 12 && e == 13) { cout << "straight" << endl; }
		else if (a == c || b == d || c == e) { cout << "three card" << endl; }
		else if (a==b&&c==d) { cout << "two pair" << endl; }
		else if (a == b&&d == e) { cout << "two pair" << endl; }
		else if (b == c&&d == e) { cout << "two pair" << endl; }
		else if (a == b || b == c || c == d || d == e) { cout << "one pair" << endl; }
		else { cout << "null" << endl; }
	}
	return 0;
}