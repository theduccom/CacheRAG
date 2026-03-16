#include<iostream>
#include<cstring>
using namespace std;
int map[110][110];
int com[110][110];
int lx,ly,sx,sy,gx,gy;
int py[4]={1,0,-1,0};
int px[4]={0,1,0,-1};
int fl;
int mei(int zx,int zy ,int cei[][110])
{
	int i;
	if(zx==gx && zy==gy)
	{
		fl=1;
		return 0;
	}
	cei[zy][zx]=1;
	for(i=0;i<4;i++)
	{
		if(cei[zy+py[i]][zx+px[i]]==0 && map[sy][sx]==map[zy+py[i]][zx+px[i]])
		{
			mei(zx+px[i],zy+py[i],cei);
			if(fl) return 0;
		}
	}
	return 0;
}
int main()
{
	int n,col,muk,vx,vy;
	int i,j,t;
	while(cin >> lx >> ly, lx!=0 && ly!=0)
	{
		fl=0;
		cin >> sx >> sy >> gx >> gy >> n;
		memset(map,0,sizeof(map));
		memset(com,0,sizeof(com));
		for(i=0;i<n;i++)
		{
			cin >> col >> muk >> vx >> vy;
			if(muk==0)
			{
				for(j=vy;j<2+vy;j++)
				{
					for(t=vx;t<4+vx;t++)
					{
						map[j][t]=col;
					}
				}
			}
			else
			{
				for(j=vy;j<4+vy;j++)
				{
					for(t=vx;t<2+vx;t++)
					{
						map[j][t]=col;
					}
				}
			}
		}
		if(map[sy][sx]!=map[gy][gx])
		{
			cout << "NG" << endl;
			continue;
		}
		mei(sx,sy,com);
		if(fl) cout << "OK" << endl;
		else cout << "NG" << endl;
	}
	return 0;
}