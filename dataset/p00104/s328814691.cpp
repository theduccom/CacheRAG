#include <iostream>
#include <cstring>
using namespace std;

int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};

char t[]={'<','^','>','v'};

char f[101][101];
bool v[100][100];
int X,Y;

bool dfs()
{
	if(v[X][Y]) return false;
	v[X][Y]=1;
	if(f[X][Y]=='.') return true;
	
	for(int i=0; i<4; i++)
	{
		if(t[i]==f[X][Y]) 
		{
			X+=dx[i];
			Y+=dy[i];
		}
	}
	return dfs();
}

int main()
{
	int H,W;
	while(cin >> H >> W, (H||W))
	{
		memset(v,0,sizeof(v));
		for(int i=0; i<H; i++)
		for(int j=0; j<W; j++)
			cin >> f[j][i];
			
		X=0; Y=0;
		
		bool f=dfs();
		if(f) cout << X << " " << Y << endl;
		else cout << "LOOP" << endl;
		
	}
}