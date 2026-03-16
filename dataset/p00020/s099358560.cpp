#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int size = 1000;
char text[1000];

int main() {

	gets(text);

	for (int i = 0; i < size; i++) {
		if (text[i] == EOF) break;
		if (text[i] >= 'a' && text[i] <= 'z') text[i] += 'A' - 'a';
	}

	cout << text << endl;

	return 0;
}

/*@@@@@@@@@@@@@@@@@@@@@@@@@*/
/*@                       @*/
/*@ debug output erased ? @*/
/*@                       @*/
/*@@@@@@@@@@@@@@@@@@@@@@@@@*/