#include <iostream>
using namespace std;

#define MAX(X,Y) ((X)>(Y)?(X):(Y))
#define MIN(X,Y) ((X)<(Y)?(X):(Y))

int main(void){
  string buf;
  string code="...B.AD..E..C";
  int brd[8][8];
  char ans;
  
  while (cin>>buf){
    int l=8,r=-1,t=8,b=-1, w, h;
    for (int i=0; i<8; i++){
      brd[i][0] = buf[i]-'0';
      if (brd[i][0]==1){
        l = MIN(i,l); r = MAX(i,r);
        t = MIN(0,t); b = MAX(0,b);
      }
    }
    for (int j=1; j<8; j++){
      cin >> buf;
      for (int i=0; i<8; i++){
        brd[i][j] = buf[i]-'0';
        if (brd[i][j]==1){
          l = MIN(i,l); r = MAX(i,r);
          t = MIN(j,t); b = MAX(j,b);
        }
      }
    }
    w = r-l+1; h = b-t+1;
    ans = code[((w-1)<<2)|(h-1)];
    if (ans=='D' && brd[l][t]==1) ans = 'F';
    if (ans=='E' && brd[l][t]==0) ans = 'G';
//    cout << l << " " << r << " " << t << " " << b << " ";
//    cout << w << " " << h << " ";
    cout << ans << endl;
  }

  return 0;
}
