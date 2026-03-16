#include <iostream>
#include <map>
#include <queue>
#include <cstring>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstdlib>
#define all(a) a.begin(),a.end()
#define FOR(i,n) for(int i=0;i<(int)n;i++)
#define FORI(i,k,n) for(int i=(int)k;i<(int)n;i++)
using namespace std;
typedef pair<int,int> pii;

int main()
{
	int n;
	cin>>n;
	FORI(j,1,n+1)
	{
		int m[20][20]={};
		
		FORI(i,0+4,8+4)
		{
			string s;
			cin>>s;
			FORI(l,0+4,8+4)
			{
				m[i][l]=s[l-4]=='1';
			}
		}
		
		
		
		
		
		int sx,sy;
		cin>>sx>>sy;
		sx+=3;sy+=3;
		m[sy][sx]=false;
		queue<pii> que;
		que.push(pii(sy,sx));
		while(!que.empty())
		{
			int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
			pii now=que.front();que.pop();
			
			FOR(i,4)
			{
				FORI(l,1,4)
				{
					int x,y;
					y=now.first+dy[i]*l;
					x=now.second+dx[i]*l;
					if(m[y][x])
					{
						m[y][x]=false;
						pii next(y,x);
						que.push(next);
					}
				}
			}
			
		}
		cout<<"Data "<<j<<":"<<endl;
		FORI(i,0+4,8+4)
		{
			FORI(l,0+4,8+4)
			{
				cout<<m[i][l];
			}
			cout<<endl;
		}
	}
	
}