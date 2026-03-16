#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>

#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int d[4] = {1,-1,4,-4};

int main()
{
	queue<string> que;
	map<string,int> ma;
	que.push("01234567");

	while(!que.empty())
	{
		string s = que.front();
		que.pop();

		int x = s.find("0");
		rep(i,4)
		{
			int b = x + d[i];
			if(0 <= b && b <= 7 && !(x == 3 && b == 4) && !(x == 4 && b == 3))
			{
				string next = s;
				char temp = next[x];
				next[x] = next[b];
				next[b] = temp;

				map<string,int>::iterator ite = ma.find(next);
				if(ite == ma.end())
				{
					que.push(next);
					ma[next] = ma[s] + 1;
				}
			}
		}
	}

	string s;
	while(cin >> s)
	{
		rep(i,7)
		{
			string temp;
			cin >> temp;
			s += temp;
		}

		cout << ma[s] << endl;
	}
	
	return 0;
}