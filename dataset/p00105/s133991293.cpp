#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	vector< pair<string,int> > v;
	pair<string,int> w;
	while(cin>>w.first>>w.second)
	{
		v.push_back(w);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		if(i==0)
		{
			cout<<v[i].first<<endl<<v[i].second;
		}
		else if(v[i].first!=v[i-1].first||i==0)
		{
			cout<<endl<<v[i].first<<endl<<v[i].second;
		}
		else
		{
			cout<<" "<<v[i].second;
		}
	}
	cout<<endl;
}