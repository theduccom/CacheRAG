#include <iostream>

using namespace std;
int main()
{
  string a[8];
  for(;cin>>a[0];)
    {
      for(int i=1;i<8;i++)
	cin>>a[i];
      char n='X';
      for(int i=0;i<8;i++)
	for(int j=0;j<8;j++)
	  if(a[i][j]=='1')
	    {
	      if(i<7&&j<7&&a[i][j+1]=='1' &&a[i+1][j]=='1' &&a[i+1][j+1]=='1')
		n='A';
	      else if(i<5&&a[i+1][j]=='1' &&a[i+2][j]=='1' &&a[i+3][j]=='1')
		n='B';
	      else if(j<5&&a[i][j+1]=='1' &&a[i][j+2]=='1' &&a[i][j+3]=='1')
		n='C';
	      else if(j>0&&i<6&&a[i+1][j]=='1' &&a[i+1][j-1]=='1' &&a[i+2][j-1]=='1')
		n='D';
	      else if(i<7&&j<6&&a[i][j+1]=='1' &&a[i+1][j+1]=='1' &&a[i+1][j+2]=='1')
		n='E';
	      else if(i<6&&j<7&&a[i+1][j]=='1' &&a[i+1][j+1]=='1' &&a[i+2][j+1]=='1')
		n='F';
	      if(n!='X')
		break;
	    }
      if(n=='X')
	n='G';
      cout<<n<<endl;

    }
}