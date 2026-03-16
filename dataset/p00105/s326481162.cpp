#include <bits/stdc++.h>

#define loop(v, f, l) for(int v = (f), v##_ = (l); v < v##_; ++v)

using namespace std;

typedef long long int lint;
static inline int in(){ int x; scanf("%d", &x); return (x); }
static inline lint inl(){ lint x; scanf("%lld", &x); return (x); }

int main()
{
	map<string, vector<int> > index;
	pair<string, vector<int> > word_page;
	string word;
	int page;
	while( cin >> word >> page )
	{
		index[word].push_back(page);
	}

	for(map<string, vector<int> >::iterator it = index.begin(); it != index.end(); it++)
	{
		vector<int> v = it->second;
		sort(v.begin(), v.end());

		cout << it->first << endl;
		vector<int>::iterator itv = v.begin();
		for(; itv + 1 != v.end(); itv++)
		{
			cout << *itv << " ";
		}
		cout << *itv << endl;
	}

	return (0);
}