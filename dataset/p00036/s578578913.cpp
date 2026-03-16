#include<iostream>
using namespace std;
int dax[]={1,0,1};
int day[]={0,1,1};
int dbx[]={0,0,0};
int dby[]={1,2,3};
int dcx[]={1,2,3};
int dcy[]={0,0,0};
int ddx[]={0,-1,-1};
int ddy[]={1,1,2};
int dex[]={1,1,2};
int dey[]={0,1,1};
int dfx[]={0,1,1};
int dfy[]={1,1,2};
int dgx[]={1,0,-1};
int dgy[]={0,1,1};

int main()
{
	char f[10][10];

	while(cin>>f[0][0])
	{
		for(int i = 0; i < 8; ++i)
		{
			for(int j = 0; j < 8; j++)
			{
				if(i==0&&j==0) continue;
				cin>>f[i][j];
			}
		}
		/*cout<<"Complete!"<<endl;
		for(int i = 0; i < 8; ++i)
		{
			for(int j = 0; j < 8; j++)
			{
				cout<<f[i][j];
			}
			cout<<endl;
		}
*/
		bool flag=false;
		for(int i = 0; i < 8; ++i)
		{
			for(int j = 0; j < 8; ++j)
			{
				if(f[i][j]=='1')
				{
					for(int k = 0; k < 3; ++k)
					{
						if(j+dax[k]<0||j+dax[k]>7||i+day[k]<0||i+day[k]>7||f[i+day[k]][j+dax[k]]=='0') break;
						if(k==2)
						{
							flag=true;
							cout<<"A"<<endl;
							break;
						}
					}
					for(int k = 0; k < 3; ++k)
					{
						if(j+dbx[k]<0||j+dbx[k]>7||i+dby[k]<0||i+dby[k]>7||f[i+dby[k]][j+dbx[k]]=='0') break;
						if(k==2)
						{
							flag=true;
							cout<<"B"<<endl;
							break;
						}
					}
					for(int k = 0; k < 3; ++k)
					{
						if(j+dcx[k]<0||j+dcx[k]>7||i+dcy[k]<0||i+dcy[k]>7||f[i+dcy[k]][j+dcx[k]]=='0') break;
						if(k==2)
						{
							flag=true;
							cout<<"C"<<endl;
							break;
						}
					}
					for(int k = 0; k < 3; ++k)
					{
						if(j+ddx[k]<0||j+ddx[k]>7||i+ddy[k]<0||i+ddy[k]>7||f[i+ddy[k]][j+ddx[k]]=='0') break;
						if(k==2)
						{
							flag=true;
							cout<<"D"<<endl;
							break;
						}
					}
					for(int k = 0; k < 3; ++k)
					{
						if(j+dex[k]<0||j+dex[k]>7||i+dey[k]<0||i+dey[k]>7||f[i+dey[k]][j+dex[k]]=='0') break;
						if(k==2)
						{
							flag=true;
							cout<<"E"<<endl;
							break;
						}
					}
					for(int k = 0; k < 3; ++k)
					{
						if(j+dfx[k]<0||j+dfx[k]>7||i+dfy[k]<0||i+dfy[k]>7||f[i+dfy[k]][j+dfx[k]]=='0') break;
						if(k==2)
						{
							flag=true;
							cout<<"F"<<endl;
							break;
						}
					}
					for(int k = 0; k < 3; ++k)
					{
						if(j+dgx[k]<0||j+dgx[k]>7||i+dgy[k]<0||i+dgy[k]>7||f[i+dgy[k]][j+dgx[k]]=='0') break;
						if(k==2)
						{
							flag=true;
							cout<<"G"<<endl;
							break;
						}
					}
				}
			}
			if(flag) break;
		}
	}
  return 0;
}