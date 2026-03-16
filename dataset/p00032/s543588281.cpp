#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <sstream>
#include <cstdio>
#include <stack>
using namespace std;

// Plastic Board(0032)
int main()
{
	//freopen("0032.txt", "r", stdin);
	int r1 = 0, r2 = 0;
	int s1, s2, d;
	while (scanf("%d,%d,%d", &s1, &s2, &d) != EOF) {
		if (s1*s1 + s2*s2 == d*d)
			++r1;
		else if (s1 == s2)
			++r2;
	}
	cout << r1 << endl << r2 << endl;
	return 0;
}