#include<bits/stdc++.h>
using namespace std;

int main(){
  double mx = -1, mn = 114514810, a;

  while(scanf("%lf", &a) != EOF){
    mx = max(mx, a);
    mn = min(mn, a);
  }

  cout << mx - mn << endl;
}