#include <bits/stdc++.h>

using namespace std;

int main()
{
  int e1, e2, c;
  int a = 0, b = 0;
  while(scanf("%d,%d,%d", &e1, &e2, &c) != EOF){
    if(e1*e1 + e2*e2 == c*c) a++;
    else if(e1 == e2) b++;
  }
  cout << a << endl << b << endl;
  return 0;
}