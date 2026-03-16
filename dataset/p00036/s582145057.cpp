#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <list>
#include <utility>
#include <cmath>
#include <sstream>
#define F first
#define S second
#define FOR(i,n) for(int i=0;i<(int)n;i++)
#define FORI(i,k,n) for(int i=k;i<(int)n;i++)
using namespace std;
bool deb(int x){cout<<x<<":ok"<<endl;return true;}
bool deb(){cout<<"ok"<<endl;return true;}
int main() {
	bool a[20][20]={};
	char e;
	while(cin>>e)
	{
		if(e=='1')a[0][0]=true;
				else a[0][0]=false;
		for(int x=0;x<8;x++)
		{
			for(int y=0;y<8;y++)
			{
				
				if(x==0&&y==0)continue;
				cin>>e;
				if(e=='1')a[y][x]=true;
				else a[y][x]=false;

			}
		}
		
		bool end=false;
		for(int x=0;x<8;x++)
		{
			for(int y=0;y<8;y++)
			{
				if(a[x][y]&&a[x+1][y]&&a[x][y+1]&&a[x+1][y+1])
				{
					cout<<"A"<<endl;
					end=true;
				}
				if(a[x][y]&&a[x][y+1]&&a[x][y+2]&&a[x][y+3])
				{
					cout<<"B"<<endl;
					end=true;
				}
				if(a[x][y]&&a[x+1][y]&&a[x+2][y]&&a[x+3][y])
				{
					cout<<"C"<<endl;
					end=true;
				}
				if(a[x+1][y]&&a[x][y+1]&&a[x+1][y+1]&&a[x][y+2])
				{
					cout<<"D"<<endl;
					end=true;
				}
				if(a[x][y]&&a[x+1][y]&&a[x+1][y+1]&&a[x+2][y+1])
				{
					cout<<"E"<<endl;
					end=true;
				}
				if(a[x][y]&&a[x][y+1]&&a[x+1][y+1]&&a[x+1][y+2])
				{
					cout<<"F"<<endl;
					end=true;
				}
				if(a[x+1][y]&&a[x+2][y]&&a[x][y+1]&&a[x+1][y+1])
				{
					cout<<"G"<<endl;
					end=true;
				}

				if(end)break;
			}
			if(end)break;
		}


	}
}