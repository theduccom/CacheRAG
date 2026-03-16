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
typedef long long ll;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 2000000000
int main()
{
	int n,max,min;
	cin >> n;
	vector<int> vec;
	char s[10];
	for(int i=0;i<n;i++)
	{
		vec.clear();
		max=min=0;
		scanf("%s",s);
		for(int j=0;j<strlen(s);j++)
		{
			vec.pb(s[j]-'0');
		}
		sort(vec.begin(),vec.end());
		for(int j=0;j<vec.size();j++)
		{
			min+=(((int)pow(10,j))*vec[vec.size()-1-j]);
		}
		for(int j=0;j<vec.size();j++)
		{
			max+=(((int)pow(10,j))*vec[j]);
		}
		cout << max-min << endl;
	}
	return 0;
}