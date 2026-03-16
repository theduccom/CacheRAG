#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(void)
{
  string s1, s2;
  int cnt = 0;
  while(cin >> s1) {
    s2 = s1;
    reverse(s2.begin(), s2.end());
    if(s1 == s2) cnt++;
    //cnt += s1 == s2;
  }
  cout << cnt << endl;
  return 0;
}