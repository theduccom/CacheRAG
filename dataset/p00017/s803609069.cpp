#include<bits/stdc++.h>
using namespace std;
vector<string> split(string &s, char delimiter){
  vector<string> res;
  int prev_split_point = 0;
  for (int i = 0; i < s.length(); i++) {
    while(s[i] != delimiter && i < s.length())i++;
    string add = s.substr(prev_split_point, i - prev_split_point);
    if(!add.empty())res.push_back(add);
    prev_split_point = i + 1;
  }
  return res;
}

int main(int argc, char *argv[]){
  char c[26];
  for (int i = 0; i < 26; i++) {
    c[i] = 'a' + i;
  }
  vector<string> vs;
  string s;
  string ans[] = {"this", "that", "the"};
  vector<string> tmp;
  while(getline(cin, s)){
    vs = split(s, ' ');
    int n = vs.size();
    for (int k = 0; k < 26; k++) {
      tmp = vs;
      for (int i = 0; i < vs.size(); i++) {
        for (int j = 0; j < vs[i].length(); j++) {
          if('a' <= tmp[i][j] && tmp[i][j] <= 'z')
            tmp[i][j] = c[(vs[i][j] - 'a' + k) % 26];
        }
      }
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < tmp.size(); j++) {
          if(tmp[j] == ans[i]){k = 50, i = 10, j = 1000;}
        }
      }
    }
    for (int i = 0; i < tmp.size(); i++) {
      std::cout << tmp[i];
      if(i == tmp.size() - 1)std::cout << std::endl;
      else std::cout << " ";
    }
  }
  return 0;
}