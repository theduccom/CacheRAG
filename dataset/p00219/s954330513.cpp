#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <complex>
#include <string>
#include <sstream>
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
#define EQ(a,b) (abs((a)-(b))<EPS)
int d[10];
int main()
{
	while(1)
	{
		for(int i=0;i<10;i++)
		{
			d[i]=0;
		}
		int n;
		cin >> n;
		if(n==0)break;
		for(int i=0;i<n;i++)
		{
			int x;
			cin >> x;
			d[x]++;
		}
		for(int i=0;i<10;i++)
		{
			if(d[i]==0)
			{
				cout << '-' << endl;
			}
			else
			{
				for(int j=0;j<d[i];j++)
				{
					cout << '*';
				}
				cout << endl;
			}
		}
	}
	return 0;
}