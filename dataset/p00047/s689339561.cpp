//49
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  bool c[3]={true};
  for(char f,t;(cin>>f).ignore()>>t;){
    swap(c[f-'A'],c[t-'A']);
  }
  cout<<char(find(c,c+3,true)-c+'A')<<endl;
  return 0;
}