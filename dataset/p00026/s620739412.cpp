#include<iostream>

using namespace std;

int ans;
int ans_max;
int map[10][10];
int x,y,s;

///////////////////////serch1////////////////////
void serch1(int xx,int yy)
{
	map[xx][yy]=-1;
	ans++;
	
	int dx[4]={1,0,-1,0};
	int dy[4]={0,1,0,-1};
/*
	getchar();
	
	system("cls");
	
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			cout << map[j][i] << " " ;
		}
		cout << endl;
	}
	cout << ans << endl;
//*/
	if(map[xx+1][yy]!=0 && map[xx][yy+1]!=0 && map[xx-1][yy]!=0 && map[xx][yy-1]!=0)
	{
		return ;
	}
	
	
	for(int i=0;i<4;i++)
	{
		if(xx+dx[i]>=0 && yy+dy[i]>=0 && xx+dx[i]<10 && yy+dy[i]<10)
		{
			if(map[xx+dx[i]][yy+dy[i]]==0)
			{
				serch1(xx+dx[i],yy+dy[i]);
			}
		}
	}
}
///////////////////////serch2////////////////////
void serch2(int xx2,int yy2,int way)
{
	if(way==99)
		return ;
	if(ans_max<map[xx2][yy2])
		ans_max=map[xx2][yy2];
	
	map[xx2][yy2]=-2;
	
	int dx[4]={1,0,-1,0};
	int dy[4]={0,1,0,-1};
	
	for(int i=0;i<4;i++)
	{
		if(xx2+dx[i]>=0 && yy2+dy[i]>=0 && xx2+dx[i]<10 && yy2+dy[i]<10)
		{
			if(map[xx2+dx[i]][yy2+dy[i]]!=-2)
			{
				serch2(xx2+dx[i],yy2+dy[i],way+1);
			}
		}
	}
}
///////////////////////s_s////////////////////
void s_s(int s_x,int s_y)
{
	map[s_x][s_y]++;
	
	int dx[4]={1,0,-1,0};
	int dy[4]={0,1,0,-1};
	
	for(int i=0;i<4;i++)
	{
		if(s_x+dx[i]>=0 && s_y+dy[i]>=0 && s_x+dx[i]<10 && s_y+dy[i]<10)
			map[s_x+dx[i]][s_y+dy[i]]++;
	}
	
	return ;
}
///////////////////////s_m////////////////////
void s_m(int m_x,int m_y)
{
	map[m_x][m_y]++;
	int dx[8]={1,0,-1,0,-1,1,1,-1};
	int dy[8]={0,1,0,-1,-1,1,-1,1};
	
	for(int i=0;i<8;i++)
	{
		if(m_x+dx[i]>=0 && m_y+dy[i]>=0 && m_x+dx[i]<10 && m_y+dy[i]<10)
			map[m_x+dx[i]][m_y+dy[i]]++;
	}
	return ;
}
///////////////////////s_l////////////////////
void s_l(int l_x,int l_y)
{
	map[l_x][l_y]++;
	int dx[12]={1,0,-1,0,1,-1,-1,1,2,0,-2,0};
	int dy[12]={0,1,0,-1,-1,1,-1,1,0,2,0,-2};
	
	for(int i=0;i<12;i++)
	{
		if(l_x+dx[i]>=0 && l_y+dy[i]>=0 && l_x+dx[i]<10 && l_y+dy[i]<10)
			map[l_x+dx[i]][l_y+dy[i]]++;
	}
	return ;
}


int main()
{
	int i,j;
	char a;
	
	for(i=0;i<10;i++)
		for(j=0;j<10;j++)
			map[i][j]=0;
	
	for(;cin >> x ;)
	{
		cin >> a >> y >> a >> s ;
		if(s==1)
		{
			s_s(x,y);
		}
		else if(s==2)
		{
			s_m(x,y);
		}
		else if(s==3)
		{
			s_l(x,y);
		}
	}
	
	ans=0;
	ans_max=0;
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(map[i][j]==0)
			{
				serch1(i,j);
			}
		}
	}
	
	serch2(0,0,0);
	
	cout << ans << "\n" << ans_max << endl;
}