#include <iostream>
using namespace std;

int main()
{
  int i,j,x;
  for(i=1;i<=9;i++)
    {
      for(j=1;j<=9;j++)
	{
	  x = i*j;
	  cout << i << "x" << j << "=" << x << endl;
	}
    }
  
  return 0;
}