#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
using namespace std;
typedef pair<string,int> P;
int main(){
  P in;
  vector<P> n;
  while(cin >> in.first >> in.second){
    n.push_back(in);
  }
  sort(n.begin(),n.end());
  
  string tmp="omanko";
  for(int i=0;i<(int)n.size();i++){
    if( tmp != n[i].first ){
      if(i!=0) cout << endl;
      tmp = n[i].first;
      cout << n[i].first << endl;
      cout << n[i].second;
    } else{
      cout << " "<< n[i].second;
    }
  }
  cout << endl;
}