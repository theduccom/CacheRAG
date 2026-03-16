#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <stdio.h>
#include <cstring>
#include <queue>
#include <stack>
#include <functional>
#include <math.h>
using namespace std;
#define Would
#define you

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	string ans;
	if (c + 10 * b + 100 * a == 1 || c + 10 * b + 100 * a == 110) { ans = "Open"; }
	else { ans = "Close"; }
	cout << ans << endl;
}

