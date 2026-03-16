#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <map>

#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

vector<string> split(const string &str, char delim){
  vector<string> res;
  size_t current = 0, found;
  while((found = str.find_first_of(delim, current)) != string::npos){
    res.push_back(string(str, current, found - current));
    current = found + 1;
  }
  res.push_back(string(str, current, str.size() - current));
  return res;
}


int main()
{
	string s;
	while(cin >> s)
	{
		vector<string> _s = split(s,',');
		vector<int> n;
		map<int,int> m;
		rep(i,_s.size())
		{
			n.push_back(atoi(_s[i].c_str()));
		}

		sort(n.begin(),n.end());
		
		rep(i,n.size())
		{
			m[n[i]]++;
		}

		if(m.size() == 2)
		{
			if(m[n[0]] == 1 || m[n[0]] == 4)
			{
				cout << "four card" << endl;
			}
			else
			{
				cout << "full house" << endl;
			}
		}

		else if(m.size() == 3)
		{
			bool flag = true;
			rep(i,n.size())
			{
				if(m[n[i]] == 3)
				{
					flag = false;
				}
			}

			if(flag)
			{
				cout << "two pair" << endl;
			}
			else
			{
				cout << "three card" << endl;
			}
		}

		else if(m.size() == 4)
		{
			cout << "one pair" << endl;
		}

		else if(m.size() == 5)
		{
			if(n[0] == 1 && n[1] == 10 && n[2] == 11 && n[3] == 12 && n[4] == 13)
			{
				cout << "straight" << endl;
			}
			else if(n[1] == n[0]+1 && n[2] == n[1]+1 && n[3] == n[2]+1 && n[4] == n[3]+1)
			{
				cout << "straight" << endl;
			}
			else
			{
				cout << "null" << endl;
			}
		}

	}
	return 0;
}