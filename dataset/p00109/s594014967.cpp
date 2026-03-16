#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i=0; i<n; i++)
typedef string::const_iterator State;
class ParseError{};

template<typename T> class Calculation
{
public:
  static void consume(State& begin, char expected) {
    if (*begin == expected) {
      begin++;
    } else {
      cerr << "Expected '" << expected << "' but got '" << *begin << "'"
           << endl;
      cerr << "Rest string is '";
      while (*begin) {
        cerr << *begin++;
      }
      cerr << "'" << endl;
      throw ParseError();
    }
  }

  static T expression(State& begin){
    T ret = term(begin);
    while(true){
      if(*begin == '+'){
        begin++;
        ret += term(begin);
      }
      else if(*begin == '-'){
        begin++;
        ret -= term(begin);
      }
      else break;
    }
    return ret;
  }

  static T term(State& begin){
    T ret = factor(begin);
    while(true){
      if(*begin == '*'){
        begin++;
        ret *= factor(begin);
      }
      else if(*begin == '/'){
        begin++;
        ret /= factor(begin);
      }
      else break;
    }
    return ret;
  }

  static T factor(State& begin){
    if(*begin == '('){
      consume(begin, '(');
      T ret= expression(begin);
      consume(begin, ')');
      return ret;
    }
    else{
      return number(begin);
    }
  }

  static T number(State& begin){
    T ret = 0;
    for(; isdigit(*begin); begin++){
      ret *= 10;
      ret += *begin - '0';
    }
    return ret;
  }
};

int N;
string s;

int main()
{
  cin >> N;
  cin.ignore();

  rep(i, N){
    getline(cin, s);
    State begin = s.begin();
    int res = Calculation<int>::expression(begin);
    cout << res << endl;
  }

  return 0;
}