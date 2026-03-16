#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;

  while(cin>>n){
    int ans_ma;
    int ma_n = n + 1;
    int c_ma = 0;

    if(ma_n % 2 == 0){
      ++ma_n;
    }
    for(int i = ma_n;;i = i + 2){
      int q = sqrt(i);

      c_ma = 1;
      for(int j = 3;j <= q;j = j + 2){
        if(i % j == 0){
          c_ma = 0;
          break;
        }
      }
      if(c_ma == 1){
        ans_ma = i;
        break;
      }
    }

    int ans_mi;
    int mi_n = n - 1;
    int c_mi = 0;

    if(mi_n == 2){
      ans_mi = 2;
    }
    else{
      if(mi_n % 2 == 0){
        --mi_n;
      }
      for(int i = mi_n;i >= 3;i = i - 2){
        int q = sqrt(i);
        
        c_mi = 1;
        for(int j = 3;j <= q;j = j + 2){
          if(i % j == 0){
            c_mi = 0;
            break;
          }
        }
        if(c_mi == 1){
          ans_mi = i;
          break;
        }
      }
    }
    cout<<ans_mi<<" "<<ans_ma<<endl;
  }
  return 0;
}

