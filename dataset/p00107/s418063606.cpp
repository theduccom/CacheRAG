#include<bits/stdc++.h>
using namespace std;

int main(){
  int stas[3];
  while(cin >> stas[0] >> stas[1] >> stas[2],stas[0]){
    sort(stas,stas+3);
    int n,r,tmp = stas[0]*stas[0]+stas[1]*stas[1];
    cin >> n;
    for(int i=0;i<n;++i){
      cin >> r;
      if(r*r*4>tmp)cout << "OK" << endl;
      else cout << "NA" << endl;
    }
  }
}

