#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  int n;
  string s1,s2,ans;
  cin >> n;
  
  for(int i=0; i<n; i++){
    cin >> s1; 
    cin >> s2;
    ans = "";
    int m = max(s1.size(),s2.size());
    while(m>s1.size()) s1 = '0' + s1;
    while(m>s2.size()) s2 = '0' + s2;

    int carry = 0;
    for(int j=m-1; j>=0; j--){
      char ch = ((s1[j]-'0') + (s2[j]-'0') + carry)%10 + '0';
      carry = ((s1[j]-'0') + (s2[j]-'0') + carry)/10;
      ans += ch; //反転してしまうが…
    }
    if(carry) ans += (carry+'0');
    reverse(ans.begin(),ans.end()); //元通り

    //頭の0を削除していく
    while(ans.size()>1 && ans[0] == '0') ans.erase(ans.begin());
    if(ans.size() > 80) cout << "overflow" << endl;
    else cout << ans << endl;
  }
  return 0;
}