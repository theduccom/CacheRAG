#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
  int N;
  cin >> N;
  for(int i = 0; i < N; i++){
    char str1[1000];
    char str2[1000];
    string ans = "";
    cin >> str1;
    cin >> str2;
    int m1 = strlen(str1) - 1, m2 = strlen(str2) - 1, pre = 0;
    int m = max(m1, m2);
    for(int j = 0; j <= m; j++){
      int sum = pre;
      sum += (m1 >= 0) ? str1[m1--] - '0' : 0;
      sum += (m2 >= 0) ? str2[m2--] - '0' : 0;
      pre = sum / 10;
      sum -= pre * 10;
      ans += '0' + sum;
    }
    if(pre > 0)
      ans += '0' + pre;
    reverse(ans.begin(), ans.end());
    if(ans.length() > 80)
      cout << "overflow" << endl;
    else
      cout << ans << endl;
  }
}