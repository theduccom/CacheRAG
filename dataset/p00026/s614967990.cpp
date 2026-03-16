#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <cstdlib>

#define REP(i,k,n) for(int i=k;i<n;i++)
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

int f[10][10];

bool checkf(int x,int y)
{
	if(0 <= x && x < 10 && 0 <= y && y < 10)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void dropInk(int x,int y,int size)
{
	if(size == 1)
	{
		f[x][y]++;
		if(checkf(x+1,y)) f[x+1][y]++;
		if(checkf(x-1,y)) f[x-1][y]++;
		if(checkf(x,y+1)) f[x][y+1]++;
		if(checkf(x,y-1)) f[x][y-1]++;
	}
	else if(size == 2)
	{
		REP(i,-1,2)
		{
			REP(j,-1,2)
			{
				if(checkf(x+i,y+j)) f[x+i][y+j]++;
			}
		}
	}
	else if(size == 3)
	{
		REP(i,-1,2)
		{
			REP(j,-1,2)
			{
				if(checkf(x+i,y+j)) f[x+i][y+j]++;
			}
		}
		if(checkf(x+2,y)) f[x+2][y]++;
		if(checkf(x-2,y)) f[x-2][y]++;
		if(checkf(x,y+2)) f[x][y+2]++;
		if(checkf(x,y-2)) f[x][y-2]++;
	}
}

int main()
{
	memset(f,0,sizeof(f));
	string s;
	while(cin >> s)
	{
		vector<string> _s = split(s,',');
		int x = atoi(_s[0].c_str());
		int y = atoi(_s[1].c_str());
		int size = atoi(_s[2].c_str());

		dropInk(y,x,size);
	}

	int count = 0;
	int ans = 0;
	rep(i,10)
	{
		rep(j,10)
		{
			if(f[i][j] == 0)
			{
				count++;
			}
			ans = max(ans,f[i][j]);
		}
	}

	cout << count << endl << ans << endl;
	return 0;
}