#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

void caesar(char* a)
{
	for (int i=0; i<strlen(a); i++) {
		if (a[i] == ' ' || a[i] == '.') continue;
		else if (a[i] == 'z') a[i] = 'a';
		else a[i]++;
	}
}

int main()
{
	char buf[81];
	
	while ( cin.getline(buf, sizeof(buf)) ) {
		int len = strlen(buf);
		for (int i=0; i<26; i++) {
			if ( (strstr(buf, "the") != NULL) || (strstr(buf, "this") != NULL) || (strstr(buf, "that") != NULL) ) {
				cout << buf << endl;
				break;
			}
			caesar(buf);
		}
	}
	
	return 0;
}