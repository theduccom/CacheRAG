#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <climits>
#include <cfloat>


using namespace std;


int main()
{
	char buf[1024];
	cin.getline(buf, sizeof(buf));
	string s(buf);
	int i;
	while ((i = s.find("apple")) != string::npos)
		s.replace(i, 5, "hoget");
	while ((i = s.find("peach")) != string::npos)
		s.replace(i, 5, "apple");
	while ((i =s.find("hoget")) != string::npos)
		s.replace(i, 5, "peach");

	cout << s << endl;

	return 0;
}