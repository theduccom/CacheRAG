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

int main(void){  
  int n;
  cin >> n;
  REP(i,n){
    string num1s;
    string num2s;
    cin >> num1s >> num2s;
    if(num1s.size()>80||num2s.size()>80)
      cout << "overflow" << endl;
    else{
      int num1[81] = {0}, num2[81] = {0}, sum[81] = {0} ;
      REP(i,num1s.size()) num1[num1s.size()-1-i] = ( num1s[i] - '0' );
      REP(i,num2s.size()) num2[num2s.size()-1-i] = ( num2s[i] - '0' );
      REP(i,80) sum[i] = num1[i] + num2[i];
      REP(i,80) if(sum[i] > 9){
        sum[i+1] += sum[i]/10;
        sum[i] = sum[i]%10;
      }
      if(sum[80] != 0) cout << "overflow" << endl;
      else{
        int first = 79;
        while(sum[first] == 0 && first !=0) first--;
        for(int i=first; i>=0; i--)
          cout << sum[i];
        cout << endl;
      }
    }
  }
}