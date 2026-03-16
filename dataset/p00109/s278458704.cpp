#include <iostream>
#include <cctype>
using namespace std;
typedef string::const_iterator State;

int number(State &begin);
int factor(State &begin);
int term(State &begin);
int expression(State &begin);

int main(void){
  int N;
  cin >> N;
  cin.ignore();
  for(int i = 0; i < N; i++){
    string Expression;
    getline(cin, Expression);

    State begin = Expression.begin();
    int ans = expression(begin);
    cout << ans << endl;
  }
  return 0;
}

int number(State &begin){
  int ret = 0;

  while(isdigit(*begin)){
    ret = ret * 10;
    ret = ret + *begin - '0';
    begin++;
  }
  return ret;
}

int factor(State &begin){
  if(*begin == '('){
    begin++;
    int ret = expression(begin);
    begin++;
    return ret;
  }else{
    return number(begin);
  }
}

int term(State &begin){
  int ret = factor(begin);

  while(true){
    if(*begin == '*'){
      begin++;
      ret = ret * factor(begin);
    }else if(*begin == '/'){
      begin++;
      ret = ret / factor(begin);
    }else{
      break;
    }
  }
  return ret;
}

int expression(State &begin){
  int ret = term(begin);

  while(true){
    if(*begin == '+'){
      begin++;
      ret = ret + term(begin);
    }else if(*begin == '-'){
      begin++;
      ret = ret - term(begin);
    }else{
      break;
    }
  }

  return ret;
}