#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(void)
{
  int cup[3] = {1, 0, 0};
  char a, b, dumy;

  while(cin >> a >> dumy >> b) {

    if(a == 'A' && b == 'B') swap(cup[0], cup[1]);
    if(a == 'A' && b == 'C') swap(cup[0], cup[2]);
    if(a == 'B' && b == 'A') swap(cup[1], cup[0]);
    if(a == 'B' && b == 'C') swap(cup[1], cup[2]);
    if(a == 'C' && b == 'A') swap(cup[2], cup[0]);
    if(a == 'C' && b == 'B') swap(cup[2], cup[1]);
    if(a == 'A' && b == 'A') swap(cup[0], cup[0]);
    if(a == 'B' && b == 'B') swap(cup[1], cup[1]);
    if(a == 'C' && b == 'C') swap(cup[2], cup[2]);
    
    //cout << cup[0] << ' ' << cup[1] << ' ' << cup[2] << endl;
  }
  if(cup[0] == 1) cout << 'A' << endl;
  else if(cup[1] == 1) cout << 'B' << endl;
  else if(cup[2] == 1) cout << 'C' << endl;
  //else cout << "error happened" << endl;
  return 0;
}