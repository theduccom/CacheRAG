#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<complex>
#define INF 1e9
#define llINF 9223372036854775807
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
int main(){
  pair<double,double> now=mp(0.0,0.0);
  int a,b;
  double r=0;
  while(scanf("%d,%d",&a,&b),a+b){
    now.F+=cos((r*M_PI)/180)*a;
    now.S+=sin((r*M_PI)/180)*a;
    r+=b;
  }
  int aa=now.F,bb=now.S;
  cout<<bb<<endl<<aa<<endl;
  return 0;
}
