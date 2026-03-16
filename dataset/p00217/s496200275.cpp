#include <bits/stdc++.h>
using namespace std;

int main(){
  int tmp;
  while(1){
    int n;
    cin >> n;
    if(n == 0) break;
    int p,d1,d2;
    int ansp,ansd = -1;

    for(int i = 0;i < n;i++){
      cin >> p >> d1 >> d2;
      if(d1 + d2 > ansd){
        ansp = p;
        ansd = d1 + d2;
      }
    }

    cout << ansp << " " << ansd << endl;
  }

  return 0;
}





