#include<iostream>
#include<string>
using namespace std;

#define L 10
#define MAX 100000000
#define D 8

int main() {
  string s[2];
  int n, num[2][L], sum[L], dig[D+1];
  for(int i=0; i<=D; ++i) dig[i] = i ? 10*dig[i-1] : 1;
  cin >> n;
  while(n--) {
    cin >> s[0] >> s[1];
    if(s[0].length() > 80 || s[1].length() > 80) {
      cout << "overflow" << endl;
      continue;
    }
    for(int i=0; i<2; ++i) {
      for(int j=0; j<L; ++j) num[i][j] = 0;
      int len = s[i].length();
      for(int j=0; j<len; ++j) {
        num[i][j/D] += dig[j%D]*(s[i][len-1-j] - '0');
        //cout << i << ", " << j << " "<< num[i][j/D] << endl;
      }
    }
    int carry = 0;
    for(int i=0; i<L; ++i) {
      sum[i] = num[0][i] + num[1][i] + carry;
      carry = sum[i] / MAX;
      sum[i] %= MAX;
    }
    if(carry > 0) {
      cout << "overflow" << endl;
    }else {
      string ans;
      bool st = false;
      for(int i=L-1; i>=0; --i) {
        if(sum[i] == 0 && st) {
          ans += "00000000";
        }else if(sum[i] > 0) {
          for(int j=D-1; j>=0; --j) {
            int d = (sum[i]%dig[j+1])/dig[j];
            if(d > 0 || st) {
              ans += (char)(d + '0');
              st = true;
            }
          }
        }
      }
      cout << (ans.length() ? ans : "0") << endl;
    }
  }
  return 0;
}