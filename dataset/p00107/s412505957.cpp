//Carry a Cheese
#include<bits/stdc++.h>
using namespace std;

int main(){
  int l1, l2, l3;
  while(true){
    cin>>l1>>l2>>l3;
    int l11=l1*l1, l22=l2*l2, l33=l3*l3;
    if(l1==0 && l2==0 && l3==0)break;
    int min_l=min(min(l11+l22, l22+l33), l33+l11);
    int n;
    cin>>n;
    while(n--){
      int r;
      cin>>r;
      if(min_l<r*r*4)cout<<"OK"<<endl;
      else cout<<"NA"<<endl;
    }
  }
  return 0;
}