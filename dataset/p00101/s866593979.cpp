#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
	int n, j;
	cin >> n;
	getchar();
	char s[1001];
	for (int i = 0; i < n; i++) {
		//string s;
		//cin >> s;
		if (scanf("%1000[^\n]%*[^\n]", s) < 1) *s = '\0';
		getchar();
		for (j = 0; j < 1000-6; j++) {
			if (s[j + 6] == 0)
				break;
			if (s[j] == 'H'&&s[j + 1] == 'o'&&s[j + 2] == 's'&&s[j + 3] == 'h'&&s[j + 4] == 'i'&&s[j + 5] == 'n'&&s[j + 6] == 'o')
				s[j + 6] = 'a';
		}
		cout << s << endl;
		for (j += 5; j >= 0; j--) {
			s[j] = 0;
		}
	}
	

}
