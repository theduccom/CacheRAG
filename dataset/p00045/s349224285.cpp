#include <iostream>
using namespace std;

int main(void)
{
  int value, num;
  int sum = 0, ave = 0, row = 0;
  char a;
  
  while(cin >> value >> a >> num)
    {
      sum += value * num;
      ave += num;
      row++;
    }
  cout << sum << endl << (int)(ave / (double)row + 0.5) << endl;
  return 0;
}