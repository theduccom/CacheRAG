#include <iostream>
using namespace std;

string map[12];
int dx[]={0,0,1,-1},dy[]={1,-1,0,0};
void check(int i,int j)
{
  map[i][j]='0';
  for(int a=0;a<4;a++)
    {
      int x=i+dx[a];
      int y=j+dy[a];
      if(x>=0 &&x<12&&y>=0&&y<12)
	if(map[x][y]=='1')
	  check(x,y);
    }
}


int main()
{
  for(;cin>>map[0];)
    {
      for(int i=1;i<12;i++)
	cin>>map[i];      
      int count=0;
      for(int i=0;i<12;i++)
	for(int j=0;j<12;j++)
	  if(map[i][j]=='1')
	    {
	      count++;
	      check(i,j);
	    }
      cout<<count<<endl;
    }
}