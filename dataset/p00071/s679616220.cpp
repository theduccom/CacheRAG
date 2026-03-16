#include <iostream>

using namespace std;

char map[20][20];
int bx[]={0,0,0,0,0,0,-3,-2,-1,1,2,3},by[]={-3,-2,-1,1,2,3,0,0,0,0,0,0};

void bom(int x,int y)
{
  int a,b;
  map[x][y]='0';
  for(int i=0;i<12;i++)
    {
      //cout<<x+bx[i]<<" "<<y+by[i]<<endl;
      if(x+bx[i]>=0 &&y+by[i]>=0 &&x+bx[i]<8 &&y+by[i]<8 &&map[x+bx[i]][y+by[i]]=='1')
	{
	  //  cout<<"bom"<<x+bx[i]<<" "<<y+by[i]<<endl;
	  bom(x+bx[i],y+by[i]);
	}
    }
}

int main()
{
  int n;
  cin>>n;
  for(int c=1;n>=c;c++)
    {
      int x,y;
      for(int i=0;i<8;i++)
	for(int j=0;j<8;j++)
	  cin>>map[i][j];
      cin>>x>>y;
      bom(y-1,x-1);
      cout<<"Data "<<c<<":"<<endl;
      for(int i=0;i<8;i++)
	{
	  for(int j=0;j<8;j++)
	    cout<<map[i][j];
	  cout<<endl;
	}
    }

}