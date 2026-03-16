#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <set>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int main() {
  int a,b,c,d,e;
   while(scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e)==5) {
     vector<int> v;
     
     v.push_back(a);
     v.push_back(b);
     v.push_back(c);
     v.push_back(d);
     v.push_back(e);
     sort(ALL(v));

     int aa = count(ALL(v),v[0]);
     int bb = count(ALL(v),v[1]);
     int cc = count(ALL(v),v[2]);
     int dd = count(ALL(v),v[3]);
     
     if (aa == 4 || bb == 4) {
       cout << "four card" << endl;
     } else if (aa==3&&dd==2||aa==2&&cc==3){
       cout << "full house" << endl;
     } else if (v[0]+1==v[1]&&v[1]+1==v[2]&&v[2]+1==v[3]&&v[3]+1==v[4]) {
       cout << "straight" << endl;
     } else if (v[0]==1&&v[1]==10&&v[2]==11&&v[3]==12&&v[4]==13) {
       cout << "straight" << endl;
     } else if (aa==3||bb==3||cc==3) {
       cout << "three card" << endl;
     } else if (aa==2&&cc==2||aa==2&&dd==2||bb==2&&dd==2) {
       cout << "two pair" << endl;
     } else if (aa==2||bb==2||cc==2||dd==2) {
       cout << "one pair" << endl;
     } else
       cout << "null" << endl;
   }

}