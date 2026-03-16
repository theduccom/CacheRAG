#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

/*
  replace from[i] in s to to[i]. 
  size of from and size of to should be equal.
  verified:
 */
string replace_all(const string& s, const vector<string>& from, const vector<string>& to){
  int size = from.size();
  vector<int> v[size];

  for(int i = 0; i < size; i++) v[i].push_back(-1);
  
  for(int i = 0; i < size; i++){
    while(1){
      int pos = s.find(from[i],v[i].back()+1);
      if(pos == -1) break;
      v[i].push_back(pos);
    }
  }

  string res = s;
  int diff = 0;

  for(int i = 0; i < size; i++)
    for(int j = 1; j < (int)v[i].size(); j++){
      res.replace(v[i][j]+diff, from[i].length(), to[i], 0, to[i].length());
      diff += (to[i].length()-from[i].length());
    }
  return res;
}

int main(){
  string s;
  getline(cin, s);
  vector<string> a(2),b(2);
  a[0] = b[1] = "apple";
  a[1] = b[0] = "peach";
  cout << replace_all(s, a, b) << endl;
  return 0;
}