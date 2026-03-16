#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main() {
  int n; cin >> n;
  while(n--) {
    string s1, s2; cin >> s1 >> s2;
      int m = max(s1.size(), s2.size());
      while(m != s1.size()) s1 = '0' + s1;
      while(m != s2.size()) s2 = '0' + s2;
      string ans;
      int c = 0;
      for(int i = m-1; i >= 0; i--) {
        int sum = s1[i]-'0' + s2[i]-'0' + c;
        c = sum/10;
        sum %= 10;
        ans += sum + '0';
      }
      if(c == 1) ans += '1';
      reverse(all(ans));
      if(ans.size() <= 80) cout << ans << endl;
      else cout << "overflow" << endl;
  }
}