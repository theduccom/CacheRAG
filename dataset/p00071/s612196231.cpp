#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main()
{
	int n ;cin >> n;
	for(int k=1;k<=n;k++)
	{
	string str[8]; for(int i=0;i<8;i++) cin >> str[i] ;
	bool bom[8][8];
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			char ch; ch=str[i][j];
			bom[i][j]=ch-'0';
		}
	}
	int x0,y0; cin >> x0 >> y0 ;
	queue<int> qx,qy;
	qx.push(x0-1); qy.push(y0-1);
	while(!qx.empty())
	{
		int x=qx.front(); qx.pop();
		int y=qy.front(); qy.pop();
		if(!bom[y][x]) continue;
		bom[y][x]=false;
		for(int i=-3;i<=3;i++)
			if(0<=y+i && y+i<=7 && bom[y+i][x]) qx.push(x), qy.push(y+i);
		for(int j=-3;j<=3;j++)
			if(0<=x+j && x+j<=7 && bom[y][x+j]) qx.push(x+j),qy.push(y);
	}
	cout << "Data " << k  << ":" << endl;
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
			cout << noboolalpha << bom[i][j] ;
		cout << endl;
	}
	}
}