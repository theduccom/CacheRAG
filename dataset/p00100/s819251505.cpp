#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
	long long n,a,b,c;
	while(cin >> n, n)
	{
		vector<long long>  v;
		map<long long,long long> m;

		while(n--)
		{
			cin >> a >> b >> c;
			if(m.insert(pair<long long,long long>(a,b*c)).second)
			{
				v.push_back(a);
			}
			else
			{
				m[a] += b*c;
			}
		}

		bool f=true;
		for(int i=0; i<v.size(); i++)
		{
			if(m[v[i]]>=1000000)
			{
				f=false;
				cout << v[i] << endl;
			}
		}
		if(f) cout << "NA" << endl;
	}
	return 0;
}