#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int x,y,s;
	int p[14][14]={};
	while(~scanf("%d,%d,%d",&x,&y,&s))
	{
		x+=2;y+=2;
		p[x][y]++;
		p[x-1][y]++;
		p[x+1][y]++;
		p[x][y-1]++;
		p[x][y+1]++;
		if(s!=1)
		{
			p[x-1][y-1]++;
			p[x-1][y+1]++;
			p[x+1][y-1]++;
			p[x+1][y+1]++;
		}
		if(s==3)
		{
			p[x-2][y]++;
			p[x+2][y]++;
			p[x][y-2]++;
			p[x][y+2]++;
		}
	}
	int white=0,max=0;
	for(int i=2;i<12;i++)
	{
		for(int j=2;j<12;j++)
		{
			if(p[i][j]==0)white++;
			else max=max<p[i][j]?p[i][j]:max;
		}
	}
	cout<<white<<endl<<max<<endl;
	return 0;
}