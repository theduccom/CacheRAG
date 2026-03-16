#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	char s[3];
	cin >> s[0] >> s[1] >> s[2];

	switch (atoi(s)) {
		case 110:
		case 001:
			printf("Open\n");
			break;
		default:
			printf("Close\n");
	}
}