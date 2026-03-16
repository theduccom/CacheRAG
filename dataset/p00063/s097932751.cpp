#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  string str;
  int ct = 0;

  while (cin >> str){
    string tmp = str;
    reverse(tmp.begin(), tmp.end());
    if (str == tmp) ct++;
  }
  cout << ct << endl;
  return (0);
}