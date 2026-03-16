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
	int a=0,b=0,o=0,ab=0,tmp;
	char str[3];
	while(scanf("%d,%s",&tmp,str)!=EOF)
	{
		if(str[0]=='A'&&str[1]=='B')ab++;
		else if(str[0]=='B')b++;
		else if(str[0]=='O')o++;
		else if(str[0]=='A')a++;
	}
	cout << a << endl;
	cout << b << endl;
	cout << ab << endl;
	cout << o << endl;
	return 0;
}