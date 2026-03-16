#include<iostream>
#include<cstdio>
using namespace std;



char slide(char ch, int dif) {
  if( ! isalpha(ch) ) return ch;

  int n = ch - 'a';
  n = (n + dif ) % 26;
  return 'a' + n;
}

int main() {
  for(string line; getline(cin, line); ){
  
  for(int dif = 0; dif < 26; dif++) {
    string str = line;
    
    for(int i = 0; i < (int)str.size(); i++) 
      str[i] = slide( str[i], dif);

    if( str.find("the") != string::npos ||
        str.find("this") != string::npos ||
        str.find("that") != string::npos ) {
      cout << str << endl;
      break;
    }
  }
    
} 
}