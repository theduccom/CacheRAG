#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int n;

	cin >> n;
	getchar();
	for (int i = 0; i < n; i++) {
		char str[1001];
		gets(str);
		for (int j = 0, len = strlen(str); j < len - 6; j++) {
			if (strncmp(&str[j], "Hoshino", strlen("Hoshino")) == 0) {
				strncpy(&str[j], "Hoshina", strlen("Hoshina"));
			}
		}
		cout << str << endl;
	}
	return 0;
}