#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 2000000000
int main()
{
	string s;
	while(cin >> s)
	{
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='@')
			{
				for(int j=0;j<(s[i+1]-'0');j++)
				{
					cout << s[i+2];
				}
				i+=2;
			}
			else
			{
				cout << s[i];
			}
		}
		cout << endl;
	}
	return 0;
}