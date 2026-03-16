#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int edge[3];
  while(cin >>edge[0]>>edge[1]>>edge[2],edge[0]||edge[1]||edge[2]){
    int n;
    cin >>n;
    sort(edge,edge+3);
    while(n--){
      int x;
      cin >>x;
      if(edge[0]*edge[0]+edge[1]*edge[1]<x*x*4){cout <<"OK"<<endl;}
      else{cout <<"NA"<<endl;}
    }
  }
  return 0;
}