#include<iostream>

using namespace std;

int map[110][110];
int ans;
int w,h,n;

void serch(int xx,int yy,int gx,int gy,int color)
{
	map[yy][xx]=0;
	
	int nex[4]={1,0,-1,0};
	int ney[4]={0,1,0,-1};
	if(xx==gx && yy==gy)
	{
		ans=1;
		return ;
	}
	for(int i=0;i<4;i++)
	{
		if(map[yy+ney[i]][xx+nex[i]]==color)
		{
			serch(xx+nex[i],yy+ney[i],gx,gy,color);
			if(ans==1)
				return ;
		}
	}
	return ;
}

int main()
{
	int sx,sy,ex,ey;
	int i,j,k;
	int c,d,x,y;
	for(;;)
	{
		cin >> w >> h ;
		if(w==0 && h==0)
			break;
		
		ans=0;
		
		for(i=0;i<110;i++)
			for(j=0;j<110;j++)
				map[i][j]=0;
		
		cin >> sx >> sy >> ex >> ey >> n ;
		
		for(i=0;i<n;i++)
		{
			cin >> c >> d >> x >> y ;
			if(d==0)
			{
				for(j=0;j<2;j++)
					for(k=0;k<4;k++)
						map[y+j][x+k]=c;
			}
			else
			{
				for(j=0;j<4;j++)
					for(k=0;k<2;k++)
						map[y+j][x+k]=c;
			}
		}
		if(map[sy][sx]!=0)
			serch(sx,sy,ex,ey,map[sy][sx]);
		
		if(ans==1)
			cout << "OK" << endl;
		else
			cout << "NG" << endl;
	}
}