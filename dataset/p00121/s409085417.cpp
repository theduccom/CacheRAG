#include<iostream>
#include<cstring>
#include<string>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
map<string,int>dp;
int dx[4]={1,-1,4,-4};
void bfs()
{
	queue<string>que;
	string p;
	p="01234567";
	dp[p]=0;
	que.push(p);
	while(que.size())
	{
		string q;
		q=que.front(); que.pop();
		int k;
		for(int i=0;i<8;i++)
		{
			if(q[i]=='0')
			{
				k=i;
				break;
			}
		}
		for(int i=0;i<4;i++)
		{
			int x;
			x=k+dx[i];
			if(x>=0&&x<=7&&!(k==3&&i==0)&&!(k==4&&i==1))
			{
				string pp;
				pp=q;
				swap(pp[x],pp[k]);
				if(dp.find(pp)==dp.end())
				{
					dp[pp]=dp[q]+1;
					que.push(pp);
				}
			}
		}
	}
}
int main()
{
	bfs();
	string s;
	while(getline(cin,s))
	{
		s.erase(remove(s.begin(),s.end(),' '),s.end());
		cout<<dp[s]<<endl;
	}
	return 0;
}
