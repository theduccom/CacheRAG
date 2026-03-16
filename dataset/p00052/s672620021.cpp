#include <iostream>
using namespace std;

int main(void)
{
  int n, a;

  while(1)
    {
      a = 0;
      cin >> n;
      if(n == 0) break;
      {
	while(n /= 5) a += n;
	cout << a << endl;
      }
    }
  return 0;
}