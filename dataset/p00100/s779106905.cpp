#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
  int n;
  while(cin >>n,n){
    vector<int> sale;
    map<int, long long> comp;
    int a;
    long long b,c;
    bool f = true;
    while(n--){
      cin >>a>>b>>c;
      if(!comp[a]){sale.push_back(a);}
      comp[a]+=b*c;
    }
    for(int i=0; i<sale.size(); i++){
      if(comp[sale[i]] >= 1000000){cout <<sale[i]<<endl;f =false;}
    }
    if(f){cout <<"NA"<<endl;}
  }
  return 0;
}