#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

char Shift(int, char);

int main(){
  int i, n;
  string str, _str;
  string The = "the", This = "this", That = "that";
  string::iterator iter1, iter2, iter3;

  while(getline(cin, str)){
    n=1;
    while(1){
      _str = str;
      for(i=0; i<_str.size(); i++)
	_str[i] = Shift(n, _str[i]);

      iter1 = search(_str.begin(), _str.end(), The.begin(), The.end());
      iter2 = search(_str.begin(), _str.end(), This.begin(), This.end());
      iter3 = search(_str.begin(), _str.end(), That.begin(), That.end());

      if(iter1 != _str.end() || iter2 != _str.end() || iter3 != _str.end())
	break;

      n++;
    }

    cout << _str << endl;
  }

  return 0;
}

char Shift(int n, char c){
  int x;
  if(c >= 'a' && c <= 'z'){
    x = c + n;
    if(x > 122) x -= 26;
    c = x;
  }
  return c;
}