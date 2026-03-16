#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool is_contain_keywords(string str,vector<string>& keywords) {
  int cnt = 0;
  vector<string>::iterator key_itr = keywords.begin();
  while(key_itr != keywords.end()) {
    if(str.find(*key_itr) != string::npos) {
      return true;
    }
    key_itr++;
  }
  return false;
}

string decode(string cipher) {
  vector<string> keywords;
  keywords.push_back("the");
  keywords.push_back("this");
  keywords.push_back("that");

  int remind_shift = -1;
  int max_cnt = 0;
  int str_len = cipher.length();
  for(int shift = 0;shift < 'z' - 'a' + 1;shift++) {
    string str = cipher;
    for(int i=0;i<str_len;i++) {
      if('a' <= cipher[i] && cipher[i] <= 'z') {
        str[i] = (cipher[i] - 'a' + shift) % ('z' - 'a' + 1) + 'a';
      }
    }
    if(is_contain_keywords(str,keywords)) return str;
  }
  return "";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string cipher;
  while(getline(cin,cipher)) {
    cout << decode(cipher) << endl;
  }
}