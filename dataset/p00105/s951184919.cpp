#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

char returnc(char c){
  if('a'<=c && c<='z'){
    if(c=='z')return 'a';
    return ++c;
  }
  return c;
}
int main(void){
  string s;
  int n;
  vector<string> ss;
  vector<vector<int> > nn;
  while(cin>>s>>n){
    if(ss.empty()){
      ss.push_back(s);
      nn.push_back(vector<int>(1,n));
      continue;
    }
    bool ok = true;
    for(int i = 0 ; i < ss.size() ; i ++){
      if(ss[i] == s){
	nn[i].push_back(n);
	ok = false;
      }
    }
    if(ok){
      ss.push_back(s);
      nn.push_back(vector<int>(1,n));
      
    }
  }
  
  for(int i = ss.size() - 1 ; i >= 0 ; i --){
    for(int j = 0 ; j < i ; j ++){
      if(ss[i] < ss[j]){
	string w = ss[i];
	ss[i] = ss[j];
	ss[j] = w;
	vector<int> ws = nn[i];
	nn[i] = nn[j];
	nn[j] = ws;
      }
    }
  }
  for(int i = 0 ; i < ss.size() ; i ++){
    cout<<ss[i]<<endl;
    sort(nn[i].begin(),nn[i].end());
    for(int j = 0 ; j < nn[i].size()-1 ; j ++){
      cout<<nn[i][j]<<" ";
    }
    cout<<nn[i][nn[i].size() - 1 ]<<endl;
  }
}