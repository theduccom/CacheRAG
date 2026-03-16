#include <iostream>

using namespace std;

main(){
  int boal[3];
  boal[0]=1;
  boal[1]=0;
  boal[2]=0;
  for(int i=0;;i++){
    char a, b;
    if(scanf("%c,%c", &a, &b)==EOF) break;
    getchar();
    int p, n;
    if(a=='A') p=0;
    else if(a=='B') p=1;
    else if(a=='C') p=2;
    if(b=='A') n=0;
    else if(b=='B') n=1;
    else if(b=='C') n=2;
    if(p==n) continue;
    int tmp;
    tmp=boal[p];
    boal[p]=boal[n];
    boal[n]=tmp;
  }
  if(boal[0]==1) cout << 'A' << endl;
  else if(boal[1]==1) cout << 'B' << endl;
  else cout << 'C' << endl;
  return 0;
}