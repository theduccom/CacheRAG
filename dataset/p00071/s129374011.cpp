#include <iostream>
#include <string>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;


string* ClearBomb(string s[],int x,int y)
{
	s[x][y] = '0';
	REP(i,-3,4)
	{
		if(-1 < x+i && x+i < 8)
		{
			if(s[x+i][y] == '1')
			{
				ClearBomb(s,x+i,y);
			}
		}

		if(-1 < y+i && y+i < 8)
		{
			if(s[x][y+i] == '1')
			{
				ClearBomb(s,x,y+i);
			}
		}
	}
	return s;
}

int main()
{
	int n,count = 0;
	cin >> n;

	rep(i,n)
	{
		string s[8];
		rep(j,8)
		{
			cin >> s[j];
		}

		int x,y;
		cin >> x >> y;

		ClearBomb(s,y-1,x-1);

		count++;
		cout << "Data " << count << ":" << endl;

		rep(i,8)
		{
			cout << s[i] << endl;
		}
	}

	return 0;
}