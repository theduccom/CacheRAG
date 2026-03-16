#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<queue>
#include<cstring>
#include<map>
using namespace std;
map<string,int> d;//d[s]表示"01234567"到s的移动次数
queue<string> q;
int _x[4]={-1,1,-4,4};//一维数组和‘0’相邻，相差1（左右）或4（上下）。‘0’位于第一行最后一个和第二行第一个时除外
int swaped;
int a[8];

bool no_over(int x)
{
	if(x>=0&&x<=7) return true;
	else return false;
		
}
//广搜+dp 我傻了
void bfs()
{
	while(!q.empty()) q.pop();
	q.push("01234567");
	d["01234567"]=0;
	while(!q.empty())
	{
		string s=q.front();
		q.pop();
		//找到“0”的位置
		int i,j;
		for(i=0;i<8;i++)
		{
			if(s[i]=='0') break;
		}
		for(j=0;j<4;j++)
		{
			swaped=i+_x[j];
			if((i==3&&swaped==4)||(i==4&&swaped==3)) continue;
			if(no_over(swaped)){
			string new_s=s;
			swap(new_s[i],new_s[swaped]);//c++居然自带swap
			if(d.find(new_s)==d.end())//不存在映射
			{
				d[new_s]=d[s]+1;
				q.push(new_s);
			}}
		}
		
	}
}
int main()
{
	bfs();
	while(scanf("%d",&a[0])!=EOF)
	{
		string s;
		s+=a[0]+'0';
		for(int i=1;i<8;i++)
		{
			cin>>a[i];
			s+=a[i]+'0';
		}
		cout<<d[s]<<endl;
	}
	return 0;
}
