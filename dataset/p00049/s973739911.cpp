#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
  int n;
  string str;
  int c1, c2, c3, c4;
  c1 = c2 = c3 = c4 = 0;

  while (scanf("%d,", &n) != EOF){
    cin >> str;
    if (str == "A"){c1++;}
    if (str == "B"){c2++;}
    if (str == "AB"){c3++;}
    if (str == "O"){c4++;}
  }
  cout << c1 << "\n" << c2 << "\n" << c3 << "\n" << c4 << endl;

  return 0;
  }