#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

const int N = 105;

char str[N];

bool isPalindrome(char ch[]) {
	int len = strlen(ch);
	for (int i=0, j=len-1; i<j; ++i, --j) {
		if (ch[i] != ch[j]) return false;
	}
	return true;
}

int main() {
	int cs = 0;
	while (scanf("%s", str) != EOF) {
		if (isPalindrome(str)) ++cs;
	}
	printf ("%d\n", cs);
	return 0;
}