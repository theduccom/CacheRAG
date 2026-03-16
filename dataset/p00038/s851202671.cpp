#include <bits/stdc++.h>
typedef long long LL;
#define SORT(c) sort((c).begin(),(c).end())

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

using namespace std;
int main(void)
{
  for(;;){
    int n[5];
    char c;
    REP(i,5){
      if(i) cin >> c;
      n[i]=0;
      cin >> n[i];
      if(n[i] == 0) return 0;
    }
    int num[16];
    REP(i,16) num[i]=0;
    REP(i,5) ++num[n[i]];
    num[14]=num[1];
    string s="null";
    REP(i,11){
      int st=0;
      REP(j,5) if(num[i+j]) ++st;
      if(st==5) s="straight";
    }
    int pa=0;
    REP(i,5) REP(j,i) if(n[i]==n[j]) ++pa;
    if(pa==1) s="one pair";
    if(pa==2) s="two pair";
    if(pa==3) s="three card";
    if(pa==4) s="full house";
    if(pa==6) s="four card";
    cout << s << endl;



  }
}