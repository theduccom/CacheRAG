#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str;

  while (getline(cin, str)){
    while (1){
      for (int i = 0; i < str.size(); i++){
        if ('a' <= str[i] && str[i] <= 'z'){
          if (str[i] != 'z')  str[i]++;
          else  str[i] = 'a';
        }
      }
      if (str.find("the") != string::npos || str.find("this") != string::npos || str.find("that") != string::npos){
        cout << str << endl;
        break;
      }
    }
  }
}