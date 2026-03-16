#include<iostream>
#include<queue>
using namespace std;
int m[100][100],used[100][100];
int d[]={0,1,0,-1,0};
main()
{
	int w,h;
	while(cin>>w>>h,h)
	{
		for(int i=0;i<h;i++)for(int j=0;j<w;j++)used[i][j]=m[i][j]=0;
		int sx,sy,gx,gy;cin>>sy>>sx>>gy>>gx;
		sx--,sy--,gx--,gy--;
		int n;cin>>n;
		for(int i=0;i<n;i++)
		{
			int c,d,x,y;cin>>c>>d>>y>>x;
			x--,y--;
			if(d==0)
			{
				for(int j=0;j<2;j++)for(int k=0;k<4;k++)m[x+j][y+k]=c;
			}
			else
			{
				for(int j=0;j<4;j++)for(int k=0;k<2;k++)m[x+j][y+k]=c;
			}
		}
		if(m[sx][sy]==0)
		{
			cout<<"NG"<<endl;
			continue;
		}
		queue<pair<int,int> >P;
		P.push(make_pair(sx,sy));
		used[sx][sy]=1;
		while(!P.empty())
		{
			int x=P.front().first,y=P.front().second;
			P.pop();
			for(int r=0;r<4;r++)
			{
				int tx=x+d[r],ty=y+d[r+1];
				if(tx<0||ty<0||tx>=h||ty>=w||used[tx][ty]||m[tx][ty]!=m[sx][sy])continue;
				used[tx][ty]=1;
				P.push(make_pair(tx,ty));
			}
		}
		cout<<(used[gx][gy]?"OK":"NG")<<endl;
	}
}

