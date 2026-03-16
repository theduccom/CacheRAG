#include <iostream>
using namespace std;
int main(){
  int n;
  while(1){
    cin >> n;
    if(n == -1)break;
    int num = 4280;
    int t,t2,t3,t4;
     t2=t3=t4=0;
     t = 1150;
     if(10 < n&&n <= 20){
       t2 = n-10;
     }else if(20 < n&&n <= 30){
       t2 = 10;
       t3 = n-20;
     }else if(30 < n){
       t2 = 10;
       t3 = 10;
       t4 = n-30;
     }
    int ans = t + t2*125 + t3*140 + t4*160;
    cout << num-ans << endl;
  }
  return 0;
}