#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <string>
#include <stack>
#include <regex>
#include <cctype>

#define REP(i, n) for (int i = 0; i < n; i++)
#define ALL(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>

using namespace std;

typedef long long ll;
typedef string::const_iterator State;

// <四則演算の式>をパース
int expression(State &);
// <乗算除算の式>をパース
int term(State &);
// <数>をパース
int number(State &);
// カッコの中
int factor(State &);

int main()
{
  int N;
  cin >> N;
  cin.ignore();
  REP(i, N)
  {
    string s;
    getline(cin, s);
    size_t pos;
    while ((pos = s.find_first_of(" ")) != string::npos)
    {
      s.erase(pos, 1);
    }
    State begin = s.begin();
    int ans = expression(begin);
    cout << ans << endl;
  }
  return 0;
}

int number(State &begin)
{
  int res = 0;

  while (isdigit(*begin))
  {
    res *= 10;
    res += *begin - '0';
    begin++;
  }

  return res;
}

int term(State &begin)
{
  int res = factor(begin);

  while (true)
  {
    switch (*begin)
    {
    case '*':
      begin++;
      res *= factor(begin);
      break;
    case '/':
      begin++;
      res /= factor(begin);
      break;
    default:
      return res;
    }
  }
}

int expression(State &begin)
{
  int res = term(begin);

  while (true)
  {
    switch (*begin)
    {
    case '+':
      begin++;
      res += term(begin);
      break;
    case '-':
      begin++;
      res -= term(begin);
      break;
    default:
      return res;
    }
  }
}

int factor(State &begin)
{
  if (*begin == '(')
  {
    begin++;
    int res = expression(begin);
    begin++;
    return res;
  }
  else
  {
    return number(begin);
  }
}
