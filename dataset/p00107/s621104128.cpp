#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x,y,z;
	while(cin >> y >> x >> z && x)
	{
		double set=sqrt(x*x+z*z)/2;
		int n,r;
		cin >> n;
		while(n--)
		{
			cin >> r;
			if(set<r)cout<<"OK"<<endl;
			else cout<<"NA"<<endl;
		}
	}
}