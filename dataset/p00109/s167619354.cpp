#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

typedef pair<int, int> P;

string str;

P expr(int);
P term(int);
P factor(int);
P number(int);

P expr(int idx)
{
  P res = term(idx);
  idx = res.first;
  int ans = res.second;
  
  while (idx < str.size() && (str[idx] == '+' || str[idx] == '-')) {
    res = term(idx + 1);
    bool plus = (str[idx] == '+');
    idx = res.first;
    
    if (plus) {
      ans += res.second;
    } else {
      ans -= res.second;
    }
  }
  return make_pair(idx, ans);
}

P term(int idx)
{
  P res = factor(idx);
  idx = res.first;
  int ans = res.second;
  
  while (idx < str.size() && (str[idx] == '*' || str[idx] == '/')) {
    res = factor(idx + 1);
    bool mult = (str[idx] == '*');
    idx = res.first;
    
    if (mult) {
      ans *= res.second;
    } else {
      ans /= res.second;
    }
  }
  return make_pair(idx, ans);
}

P factor(int idx)
{
  if (str[idx] == '(') {
    P res = expr(idx + 1);
    res.first++;
    return res;
  } else if (isdigit(str[idx])) {
    P res = number(idx);
    return res;
  }
}

P number(int idx)
{
  int N = 0;
  while (idx < str.size() && isdigit(str[idx])) {
    N *= 10;
    N += str[idx++] - '0';
  }
  return make_pair(idx, N);
}

void solve()
{
  int ans = expr(0).second;
  cout << ans << endl;
}

int main()
{
  int N;
  scanf("%d ", &N);
  
  for (int i = 0; i < N; i++) {
    getline(cin, str);
    str.erase(str.begin() + str.size() - 1);
    //cout << str << endl;
    solve();
  }
}