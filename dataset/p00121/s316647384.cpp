#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<map>
#include<queue>
#include<algorithm>
using namespace std;
map<string,int> DP;
int move[4]={1,-1,4,-4};
void BFS()
{
	queue<string> que;
	que.push("01234567");
	DP["01234567"]=0;
	while(!que.empty())
	{
		string now=que.front();
		que.pop();
		int p=0;
		for(int i=0;i<8;i++)
		{
			if(now[i]=='0')
			{
				p=i;
				break;
			}
		}
		for(int i=0;i<4;i++) 
		{
			int n=p+move[i];
			if(n>=0 && n<8 && !(p==3&&i==0) && !(p==4&&i==1))
			{
				string next=now;
				swap(next[p],next[n]);
				if(DP.find(next)==DP.end())
				{
					DP[next]=DP[now]+1;
					que.push(next);
				}
			}
		}
		
	}
	
}
int main()
{
	BFS();
	string aa;
	while(getline(cin,aa))
	{
		aa.erase(remove(aa.begin(),aa.end(),' '),aa.end());
		cout<<DP[aa]<<endl;
	}
	return 0;
 } 