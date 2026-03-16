#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin>>n;
  while(n--) {
    string s1,s2;
    cin >> s1 >> s2;

    int a = s1.length()-1;
    int b = s2.length()-1;
    int c = 0;
    vector<int> ans;
    for (; a>=0 || b>=0; a--, b--) {
      int s = c;
      if (a>=0) s+=s1[a]-'0';
      if (b>=0) s+=s2[b]-'0';
      c = s / 10;
      ans.push_back(s % 10);
    }
    if (c) ans.push_back(1);
    reverse(ans.begin(), ans.end());
    if (ans.size()<=80)
      for (int i=0; i<ans.size(); i++)
        cout << ans[i];
    else
      cout << "overflow";
    cout << endl;
  }
}