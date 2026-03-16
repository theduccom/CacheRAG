#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  int p2[10] = {512,256,128,64,32,16,8,4,2,1},n;
  vector<int> v;
  while(cin>>n){
    for(int i=0;i<10;i++){
      if(n>=p2[i])n-=p2[i],v.push_back(p2[i]);
    }
    sort(v.begin(),v.end());
    vector<int>::iterator it=v.begin();
    for(;it!=v.end();it++){
      cout<<*it;
      (it+1==v.end())?cout<<endl:cout<<" ";
    }
    v.clear();
  }
  return 0;
}