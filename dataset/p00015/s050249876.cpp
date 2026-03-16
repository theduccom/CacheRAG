#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n; cin >> n;
  for(int i=0;i<n;i++) {
    string s1,s2;
    cin >> s1;
    cin >> s2;
    int s1_itr = s1.length() - 1;
    int s2_itr = s2.length() - 1;
    bool is_shift = false;
    int digit;
    vector<int> sum;
    while(s1_itr >= 0 || s2_itr >= 0) {
      digit = 0;
      if(s1_itr >= 0)
        digit += s1[s1_itr] - '0';
      if(s2_itr >= 0)
        digit += s2[s2_itr] - '0';
      if(is_shift)
        digit += 1;

      if(digit >= 10) {
        is_shift = true;
        digit = digit - 10;
      }
      else {
        is_shift = false;
      }
      sum.push_back(digit);
      s1_itr--;
      s2_itr--;
    }
    if(is_shift)
      sum.push_back(1);

    if(sum.size() > 80) {
      cout << "overflow" << endl;
    }
    else {
      for(int i=sum.size()-1;i>=0;i--) {
        cout << sum[i];
      }
      cout << endl;
    }
  }
}