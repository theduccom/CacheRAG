#include <iostream>
#include <cmath>
using namespace std;
#define KMAX  30
#define VMAX  1000000

int main(){
  int k, v;
  int K[KMAX];
  char T[VMAX+1];
  bool prime[VMAX+1];
  for (int i=0;i<=VMAX;i++) prime[i] = false;
  for (int i=3;i<=VMAX;i+=2) prime[i] = true;
  prime[2] = true;
  int limit = (int)sqrt((double)VMAX) + 1;
  for (int i=3;i<=limit;i+=2){
    if (!prime[i]) continue;
    for (int j=i+i;j<=VMAX;j+=i) prime[j] = false;
  }

  while (cin >> k >> v && !(k ==0 && v ==0)){
    for (int i=0;i<k;i++) cin >> K[i];
    for (int j=0;j<=v;j++) T[j]=0;
    T[0]=1;
    for (int j=K[0];j<=v;j+=K[0]) T[j]=1;
    for (int i=1;i<k;i++){
      for (int j=K[i];j<=v;j++){
        T[j] = (T[j] | T[j-K[i]]);
      }
    }
    int ans = -1;
    for (int i=v;i>1;i--)
      if (prime[i] && T[i]){
        ans = i;
        break;
      }
    if (ans==-1)
      cout << "NA" << endl;
    else
      cout << ans << endl;
  }
  return 0;
}