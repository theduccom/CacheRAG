#include <cstdio>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	
	char s[3];
	map<string, int> m;

	while(scanf("%*d, %s", &s)!=EOF)
		m[string(s)]++;
	cout << m["A"] << endl << m["B"] << endl << m["AB"] << endl << m["O"] << endl;

	return 0;

}