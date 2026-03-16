#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>

#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

vector<string> split(const string &str, char delim)
{
  vector<string> res;
  size_t current = 0, found;
  while((found = str.find_first_of(delim, current)) != string::npos)
  {
    res.push_back(string(str, current, found - current));
    current = found + 1;
  }
  res.push_back(string(str, current, str.size() - current));
  return res;
}

int main()
{
	string f[101];
	map<string,string> m;

	string s,n;
	vector<string> res;
	while(cin >> s)
	{
		cin >> n;
		m[s] += n + " ";

		vector<string>::iterator ite = find(res.begin(),res.end(),s);
		if(ite == res.end())
		{
			res.push_back(s);
		}
	}

	sort(res.begin(),res.end());

	rep(i,res.size())
	{
		cout << res[i] << endl;
		m[res[i]] = m[res[i]].substr(0,m[res[i]].size()-1);
		vector<string> _s = split(m[res[i]],' ');
		vector<int> v;
		rep(j,_s.size())
		{
			v.push_back(atoi(_s[j].c_str()));
		}

		sort(v.begin(),v.end());		
		
		rep(j,v.size())
		{
			if(j == _s.size()-1)
			{
				cout << v[j] << endl;
			}
			else
			{
				cout << v[j] << " ";
			}
		}
	}

	return 0;
}