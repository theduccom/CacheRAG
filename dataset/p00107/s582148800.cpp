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
vector<int> vec;
int main()
{
	while(1)
	{
		double p,q,r;
		vec.clear();
		int x,y,z;
		cin >> x >> y >> z;
		if(x==0&&y==0&&z==0)break;
		vec.pb(x);
		vec.pb(y);
		vec.pb(z);
		sort(vec.begin(),vec.end());
		p=((double)vec[0])/2.0;
		q=((double)vec[1])/2.0;
		r=sqrt(p*p+q*q);
		int m;
		cin >> m;
		for(int i=0;i<m;i++)
		{
			int t;
			cin >> t;
			if(r<t)
			{
				cout << "OK" << endl;
			}
			else
			{
				cout << "NA" << endl;
			}
		}
	}
	return 0;
}