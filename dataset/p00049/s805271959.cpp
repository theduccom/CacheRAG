#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(int argc, char **argv)
{
  int no;
  char c;
  string bt;
  map<string, int> m;
  while (cin >> no >> c >> bt) {
    m[bt]++;
  }
  cout << m["A"] << endl;
  cout << m["B"] << endl;
  cout << m["AB"] << endl;
  cout << m["O"] << endl;
  return 0;
}