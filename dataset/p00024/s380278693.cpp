#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<bitset>
#include<utility>
#include<string>

using namespace std;

main(){
  double t,v,y,n;
  int i,j,l;
  while(cin >> v){
    t=v/9.8;
    y=4.9*t*t;
    n=ceil((y+5)/5);
    printf("%.0f\n",n);
  }
}