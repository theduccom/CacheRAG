#include <iostream>
using namespace std;

int main(void)
{
  int i = 0, j = 0;
  for(i = 1; i < 10; ++i) {
    for(j = 1; j < 10; ++j) {
      cout << i << "x" << j << "=" << (i * j) << endl;
    }
  }
  return 0;
}