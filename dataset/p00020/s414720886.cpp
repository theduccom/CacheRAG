#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
#include <utility>
#include <string>
#include <ctype.h>
#include <cstring>
#include <cstdio>
#include <sstream>
#include <functional>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ll long long
//#define scanf scanf_s

int main()
{
	string s;
	getline(cin, s);
	for (int i = 0; s.size()>i;i++)
	{
		{
			if (s[i] >= 'a'&&s[i] <= 'z') s[i] -= 32;
			cout << s[i] ;
		}
	}
	cout << endl;
	return 0;
}