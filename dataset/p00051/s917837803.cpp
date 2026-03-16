#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <functional>
using namespace std;
#define all(c) (c).begin(), (c).end()

int main(int argc, char **argv)
{
  int cnr, large, small;
  string s;
  cin >> cnr;
  while (cnr--) {
    cin >> s;
    sort(all(s));
    istringstream is(s);
    is >> small;
    sort(all(s), greater<char>());
    istringstream is2(s);
    is2 >> large;
    cout << large - small << endl;
  }
  return 0;
}