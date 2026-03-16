#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <set>

using namespace std;
typedef long long LL;
static const double EPS = 1e-9;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n) 

int l[10],L[11],v[2];
int main(void){
  while(cin>>l[0]){
    getchar();
    for(int i=1; i<10; i++){
      cin >> l[i];
      getchar();
    }
    cin >> v[0];
    getchar();
    cin >> v[1];
    L[0] = 0;
    for(int i=1;i<=10; i++)
      L[i] = L[i-1] + l[i-1];
    double con = (double)v[0]/(v[0]+v[1]) * L[10];
    for(int i=0;i<10;i++){
      if(con==0) {
cout << 1 << endl;
break;
}
      if(i==9){
        cout << 10 << endl;
        break;
      }
      if(L[i] < con && con <= L[i+1]){
        cout << (i+1) << endl;
        break;
      }
    }
  }
  return 0;
}