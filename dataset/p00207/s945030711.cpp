#include <iostream>
using namespace std;

int g[105][105];

void dfs(int a,int b,int p)
{
	if(g[a][b]!=p)return;

	g[a][b]=-1;

	dfs(a+1,b,p);
	dfs(a-1,b,p);
	dfs(a,b+1,p);
	dfs(a,b-1,p);
	}

int main()
{
	int w,h,sx,sy,gx,gy,n;
	while(true)
	{	
		for(int i=0;i<105;i++){
			for(int j=0;j<105;j++){
				g[i][j]=0;
				}
			}

		cin >> w >> h;
		if(w==0&&h==0)break;
		cin >> sx >> sy;
		cin >> gx >> gy;
		cin >> n;
	
		for(int i=0;i<n;i++)
		{	
			int c,d,x,y;
			cin >> c >> d >> x >> y;
			g[y][x]=c;
			if(d==0)
			{
				g[y][x+1]=c;
				g[y][x+2]=c;
				g[y][x+3]=c;
				g[y+1][x]=c;
				g[y+1][x+1]=c;
				g[y+1][x+2]=c;
				g[y+1][x+3]=c;
				}
			else{
				g[y+1][x]=c;
				g[y+2][x]=c;
				g[y+3][x]=c;
				g[y][x+1]=c;
				g[y+1][x+1]=c;
				g[y+2][x+1]=c;
				g[y+3][x+1]=c;
				}
			}
	
	int p=g[sy][sx];
	if(p!=0)dfs(sy,sx,p);
	if(g[gy][gx]==-1){
		cout <<"OK" << endl;
		}
	else{
		cout << "NG" << endl;
		}
	}
	return 0;
	}