#include <iostream>
using namespace std;

int main(void)
{
  int a, b;
  int flag;
  int flag2=0;
  
  while(1)
    {
      cin >> a >> b;
      if(a == 0 && b == 0) break;
      flag = 0;
      if(flag2 != 0)cout << endl;

      for(int i = a ; i <= b ; i++)
	{
	  if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0) 
	    {
	      cout << i << endl;
	      flag = 1;
	    }
	}
      if(flag == 0) cout << "NA" << endl;
      flag2 = 1;
    }
  return 0;
}