#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
  int edge[3],n;
  double x;
  while(cin >>edge[0]>>edge[1]>>edge[2],edge[0]||edge[1]||edge[2]){
    cin >>n;
    sort(edge,edge+3);
    x = sqrt(edge[0]*edge[0]+edge[1]*edge[1]);
    while(n--){
      double a;
      cin >>a;
      if(a*2>x){cout <<"OK"<<endl;}
      else{cout <<"NA"<<endl;}
    }
  }
  return 0;
}