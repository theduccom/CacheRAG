#include <iostream>
#include <vector>
#include <map>
#include <cstring>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <sstream>
using namespace std;

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define repp(i,k,n) for(int i=k;i<(int)n;i++)
#define rei(n) for(int i=0;i<(int)n;i++)
#define rel(n) for(int l=0;l<(int)n;l++)
#define al(s) s.begin(),s.end()

typedef pair<int, int> pi;
typedef pair<pi, pi> ppi;
typedef pair<int, ppi> pipp;

vector<int> pri;
void era(int n)
{
	vector<int> fl(n+1,0);
	for (int i = 2; i <= n; i++)
	{
		if (fl[i] == 0)
		{
			for (int l = i; l <= n; l += i)
			{
				fl[l] = 1;
			}
			pri.push_back(i);
		}
	}

}

int main()
{
	era(10000);
	int n;
	vector<int> ans;
	for (int i = 0; i < pri.size(); i++)
	{
		if (binary_search(al(pri), pri[i] + 2))
		{
			ans.push_back(pri[i] + 2);
		}
	}

	while (cin >> n&&n)
	{
		if (binary_search(al(ans), n))
		{
			cout << *(lower_bound(al(ans), n))-2 <<" "<< *(lower_bound(al(ans), n)) << endl;
		}
		else
		{
			cout << *(lower_bound(al(ans), n)-1) -2<<" "<< *(lower_bound(al(ans), n) - 1)<< endl;
		}
	}
}