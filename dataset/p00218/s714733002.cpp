#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  while(1){
    cin >> n;
    if(n == 0) break;

    int ja,ma,en;
    for(int i = 0;i < n;i++){
      cin >> ma >> en >> ja;
      if(ja == 100 || ma == 100 || en == 100){
        cout << 'A' << endl;
      }else if((ma + en)/2 >= 90){
        cout << 'A' << endl;
      }else{
        double ave;
        ave = (ja + ma + en)/3.0;
        if(ave >= 80){
          cout << 'A' << endl;
        }else if(ave >= 70 || (ave >= 50 && (ma >= 80 || en >= 80))){
          cout << 'B' << endl;
        }else{
          cout << 'C' << endl;
        }
      }
    }
  }

  return 0;
}


