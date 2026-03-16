#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
void getValue(string& line, int& a, int& b, int& c){
	string::size_type p1 = line.find(',');
	string::size_type p2 = line.rfind(',');
	a = atoi(line.substr(0, p1).c_str());
	b = atoi(line.substr(p1 + 1, p2 - p1 - 1).c_str());
	c = atoi(line.substr(p2 + 1).c_str());
}
int main()
{
	int a, b, c, n1, n2;
	n1 = n2 = 0;
	string s;
	while (cin >> s){
		getValue(s, a, b, c);
		if (c*c == a*a + b*b)
			++n1;
		else if (a == b)
			++n2;
	}
	cout << n1 << "\n" << n2 << "\n";
	return 0;
}