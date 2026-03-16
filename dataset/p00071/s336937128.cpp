#include<iostream>
#include<cstdio>
#include<string>
#include<queue>
using namespace std;
int main()
{
	int n,cnt=0;
	cin>>n;
	while(n--) 
	{
		++cnt;
		string f[8];
		for(int i = 0; i < 8; ++i)
		{
			cin>>f[i];
		}
		int x,y;
		cin>>x>>y;

		queue<int> xs,ys;
		xs.push(x-1); ys.push(y-1);
		f[y-1][x-1]='0';
		while(!xs.empty())
		{
			int xx=xs.front(),yy=ys.front();
			xs.pop(); ys.pop();
			
			for(int i = 1; i < 4; ++i)
			{
				if(0<=xx-i&&f[yy][xx-i]=='1')
				{
					f[yy][xx-i]='0';
					xs.push(xx-i); ys.push(yy);
				}
				if(xx+i<8&&f[yy][xx+i]=='1')
				{
					f[yy][xx+i]='0';
					xs.push(xx+i); ys.push(yy);
				}
				if(0<=yy-i&&f[yy-i][xx]=='1')
				{
					f[yy-i][xx]='0';
					xs.push(xx); ys.push(yy-i);
				}
				if(yy+i<8&&f[yy+i][xx]=='1')
				{
					f[yy+i][xx]='0';
					xs.push(xx); ys.push(yy+i);
				}
			}
		}
		cout<<"Data "<<cnt<<":"<<endl;
		for(int i = 0; i < 8; ++i)
		{
			cout<<f[i]<<endl;
		}
	}
  return 0;
}