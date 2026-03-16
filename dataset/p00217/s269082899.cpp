#include <iostream>
using namespace std;

int main(void)
{
  int n, p, d1, d2;
  int top, sum;

  while(1)
    {
      top = 1;
      sum = 0;

      cin >> n;
      if(n == 0) break;

      for(int i = 0 ; i < n ; i++)
	{
	  cin >> p >> d1 >> d2;
	  if(sum < d1 + d2)
	    {
	      top = p;
	      sum = d1 + d2;
	    }
	}
      cout << top << ' ' << sum << endl;
    }
  return 0;
}