#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
  int n;
  while(cin >>n,n){
    map<int, long long> com;
    vector<int> g;
    com.clear();
    g.clear();
    while(n--){
      int a;
      long long b,c;
      cin >>a>>b>>c;
      if(!com[a]){g.push_back(a);}
      com[a]+=b*c;
    }
    bool f = false;
    for(int i=0; i<g.size(); i++){
      if(com[g[i]]>=1000000){cout <<g[i]<<endl;f = true;}
    }
    if(!f){cout <<"NA"<<endl;}
  }
  return 0;
}