#include <iostream>
#include <algorithm>
#include <cstring>
#include <stack>
using namespace std;

int main(void){
  string s1, s2;
  stack<int> sum;
  int tmp, carry, n, len1, len2;

  cin >> n;
  for(int i = 0; i < n; i++){
    tmp = carry = 0;
    while(!sum.empty()) sum.pop();
    cin >> s1 >> s2;
    len1 = s1.length();
    len2 = s2.length();
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    for(int i = 0; i < max(len1, len2); i++){
      tmp = carry;
      if(i < len1) tmp += s1[i] - '0';
      if(i < len2) tmp += s2[i] - '0';
      sum.push(tmp % 10);
      carry = tmp / 10;
    }
     
    if(carry != 0){
      sum.push(carry);
      carry = 0;
    }

    if(sum.size() > 80){
      cout << "overflow" << endl;
    }else{
      while(!sum.empty()){
        cout << sum.top();
        sum.pop();
      }
      cout << endl;
    }
  }
  return 0;
}