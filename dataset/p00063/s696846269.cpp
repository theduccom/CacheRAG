#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
	string s,t; int n=0;
	while(cin >> s)
	{
		t=s;
		reverse(t.begin(), t.end());
		if(s==t)n++;
	}
	cout << n << endl;
}