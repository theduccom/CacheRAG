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
char str[101];
int check()
{
	int len=strlen(str);
	if(len==1)return 1;
	int l=len/2;
	for(int i=0;i<l;i++)
	{
		if(str[i]!=str[len-1-i])return 0;
	}
	return 1;
}
int main()
{
	int ans=0;
	while(cin>>str)
	{
		if(check())ans++;
	}
	cout << ans << endl;
	return 0;
}