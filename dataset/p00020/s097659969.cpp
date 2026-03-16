#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	string s;
	getline(cin, s);

	transform(s.begin(), s.end(), s.begin(), ::toupper);

	cout << s << endl;
}
