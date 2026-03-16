#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int t[12][12];

int main(){
  int n;

  while(cin >> n, n){
    //ツ配ツ療アツづー0ツづ?渉可甘コツ可サツつオツづ?つィツつュ
    memset(t, 0, sizeof(t));

    //ツ禿シツ療債つキツづゥツづつつ「ツづ?づ? ツ債?計ツづ可堕ォツつオツつアツづ敖づ?行ツつ、
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        cin >> t[i][j];

        t[i][n] += t[i][j];
        t[n][j] += t[i][j];
        t[n][n] += t[i][j];
      }
    }

    //ツ出ツ療?
    for(int i = 0; i <= n; i++){
      for(int j = 0; j <= n; j++){
        printf("%5d", t[i][j]);
      }
      cout << endl;
    }
  }
}