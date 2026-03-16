//Prime Number ?
#include<bits/stdc++.h>
using namespace std;

vector<int> p;

int main(){
  int n;
  p.push_back(2);
  for(int i=3; i<=60000; i+=2){
    bool flag=true;
    for(int j=0; j<p.size(); j++){
      if(i%p[j]==0){
        flag=false;
        break;
      }
    }
    if(flag) p.push_back(i);
  }
  while(cin>>n){
    int i;
    for(i=0; i<p.size(); i++){
      if(n<p[i])break;
    }
    cout<<(n==p[i-1] ? p[i-2] : p[i-1])<<' '<<p[i]<<endl;
  }
  return 0;
}