#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
  double height[100];
  double diff;
  int i = 0;

  while(cin >> height[i])
    {
      i++;
    }
  sort(height, height + i);

  diff = height[i-1] - height[0];

  cout << diff << endl;
  return 0;
}