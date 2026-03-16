#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<functional>
#include<string>
#include<cstring>
#include<cmath>
#include<bitset>
#include<queue>
#include<set>
#include<map>
#include<sstream>
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
const ll MOD=1000000007;
map<string,int> d;
int dx[]={1,-1,4,-4};
queue<string> que;
//d["01234567"]=0;
char num[9];
void bfs()
{
	que.push("01234567");
	while(que.size())
	{
		string str=que.front();
		que.pop();
		int t=str.find("0");
		string strr;
		rep(i,4)
		{
			int next;
			next=t+dx[i];
			if(next>=0&&next<=7&&!((next==3&&t==4)||(next==4&&t==3)))
			{
				strr=str;
				swap(strr[next],strr[t]);
				if(d.find(strr)==d.end())
				{
					que.push(strr);
					d[strr]=d[str]+1;
				}
			}
		}
	}
}
int main()
{
	string s;
	while(getline(cin,s))
	{
		string t;
		rep(i,s.size())
		{
			if(s[i]!=' ')t+=s[i];
		}
		bfs();
	cout<<d[t]<<endl;
	}
	return 0;
}