
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n,x,m;
    x=0;
    m=0;
    vector<int> v;
    scanf ("%d",&n);
    while(n){
      v.push_back(n);
      if(n>x){
        x=n;
      }
      scanf ("%d",&n);
      m++;
    }
    vector<int> res;
    vector<int> p(x+1,1);
    p[0]=0;
    p[1]=0;
    for (int t=2;t<=x;t++) {
      if (p[t]==0) continue;
      // p の倍数を全て消す。
      for (int k=t*2;k<=x;k+=t){
        p[k] = 0;
      }
      res.push_back(t);
    }
    int a=0;
    int s;
    for(int t=0;t<m;t++){
      a=0;
      s=res.size();
      for(int k=0;k<s;k++){
        if(v[t]-res[k]>=1){
          if(p[v[t]-res[k]]==1){
            a++;
          }
        }
      }
      a=a/2+a%2;
      printf("%d\n",a);
    }
}

