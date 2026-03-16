#include <iostream>
#include <vector>
 
using namespace std;
 
int main(void)
{
  int a, b;
  vector <int> leap;
 
  while (true) {
    cin >> a >> b;
    if (a == 0 && b == 0)
      break;
    for (int i = a; i <= b; i++)
      if (i % 400 == 0 || (i % 100 && i % 4 == 0))
        leap.push_back(i);
    leap.push_back(-1);
  }
  
  bool hoge = false;
  for (int i = 0; i < leap.size()-1; i++) {
    if (leap[i] < 0 && hoge) {
      cout << "NA\n" << endl;
      hoge = false;
    } else if (leap[i] < 0) {
      cout << endl;
      hoge = true;
    } else {
      cout <<  leap[i] << endl;
      hoge = false;
    }
  }
  return 0;
}