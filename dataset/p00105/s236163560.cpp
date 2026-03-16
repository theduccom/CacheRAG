#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	string str; int n;
	multimap<string,int> ans;
	while(cin>>str>>n)
		ans.insert(pair<string,int>(str,n));
	multimap<string,int>::iterator p;
	for(p=ans.begin();p!=ans.end(); )
	{
		string tmp= p->first;
		cout << tmp << endl;
		int cnt=0;
		vector<int> v;
		do
		{
			v.push_back(p->second); p++;
		}while(p!=ans.upper_bound(tmp));
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
		{
			if(i) cout << ' ' ;
			cout << v[i] ;
		}
		cout << endl;
	}
}