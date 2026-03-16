#include<set>
#include<map>
#include<bitset>
#include<stack>
#include<cmath>
#include<string>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iomanip>
#include<sstream>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;
#define ls id<<1,l,mid
#define rs id<<1|1,mid+1,r
#define OFF(x) memset(x,-1,sizeof x)
#define MEM(x) memset(x,0,sizeof x)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define Rep(i,a,b) for(int i=a;i>=b;i--)
typedef long long ll;
typedef pair<int,int>pii;
const int maxn=1e5+50;
const int inf =0x3f3f3f3f;
const int MOD =1e9+7;

map<string,int> dp;
int dic[4][2]={1,0,-1,0,0,1,0,-1};

bool Check(int x,int y)
{
	return x>=0&&y>=0&&x<4&&y<4;
}

void bfs()
{
	queue<string> q;
	q.push("01234567");
	dp["01234567"]=0;
	while(!q.empty())
	{
		string now,nxt;
		now=q.front();q.pop();
		int x,y,z;
		for(z=0;z<8;z++)
		{
			if(!(now[z]-'0'))
				break;
		}
		x=z/4;y=z%4;
		for(int i=0;i<4;i++)
		{
			int newx=x+dic[i][0];
			int newy=y+dic[i][1];
			int newz=newx*4+newy;
			if(Check(newx,newy))
			{
				nxt=now;
				swap(nxt[z],nxt[newz]);
                if(dp.find(nxt)==dp.end())
                {
                	dp[nxt]=dp[now]+1;
				    q.push(nxt);
                }
			}
		}
	}
	
}

int main()
{
	bfs();
	string line;
	while(getline(cin,line))
	{
		line.erase(remove(line.begin(),line.end(),' '),line.end());
		cout<<dp[line]<<endl;
	}
	return 0; 
}