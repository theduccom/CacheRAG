#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#define rep(i,n) for(int i=0;i<(int)n;i++)

using namespace std;



int main()
{
	int n;
	cin>>n;
	while(n!=0)
	{
	vector< pair<int,int> > a;
	rep(i,n)
	{
		int z,x,c;
		cin>>z>>x>>c;
		a.push_back(pair<int,int>(x+c,z));
	}
	
	sort(a.begin(),a.end());
	
		cout<<a[a.size()-1].second<<" "<<a[a.size()-1].first<<endl;
		cin>>n;
	}
}