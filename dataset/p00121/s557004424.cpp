/*
* Filename:    aoj0121.cpp
* Desciption:  Desciption
* Created:     2016-03-07
* Author:      JIngwei Xu [mail:xu_jingwei@outlook.com]
*
*/
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>
#include<map>
#include<queue>
#define INT_MAX 1<<30
using namespace std;
//typedef long long ll;
const int INF=0x7F;
int dx[5]={1,0,0,-1,0},dy[5]={0,1,-1,0,0};
map<string,int> dp;
void bfs(){
	queue<string> que;
	que.push("01234567");
	dp["01234567"]=0;
	while (!que.empty())
	{
		string get=que.front();que.pop();
		int cr=0;
		for (int i = 0; i < 8; i += 1)
		{
			if(get[i]=='0'){
				cr=i;
				break;
			}
		}
		int cx=cr/4,cy=cr%4;
		for (int i = 0; i < 4; i += 1)
		{
			int px=cx+dx[i],py=cy+dy[i];
			if(px<0||py<0||px>1||py>3)continue;
			int pr=4*px+py;
			string ps=get;
			swap(ps[cr],ps[pr]);
			if(dp.find(ps)==dp.end()){
				dp[ps]=dp[get]+1;
				que.push(ps);
			}
		}
	}
}
char str[10];
int main()
{
	bfs();
	bool vvv=false;
	while (1)
	{
		for (int i = 0; i < 8; i += 1)
		{
			if (scanf("%s",&str[i])==EOF){vvv=true;break;}
		}
		if(vvv)break;
		printf("%d\n",dp[str]);
//		printf("%d\n",dp["10234567"]);
		
	}
	return 0;
}