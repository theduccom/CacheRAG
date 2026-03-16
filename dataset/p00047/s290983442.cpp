#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(){

  char x,y;
  string c,z[5] = {"0","0","0","0","0"};
  int a,b;

  z[0] = "A";

  while(scanf(" %c,%c",&x,&y) != EOF){

    if(x == 'A') a = 0;
    if(x == 'B') a = 1;
    if(x == 'C') a = 2;

    if(y == 'A') b = 0;
    if(y == 'B') b = 1;
    if(y == 'C') b = 2;

    swap(z[a],z[b]);
  }

  for(int i=0;i<3;i++){
    if(z[i] == "A"){
      if(i == 0) cout << "A" << endl;
      if(i == 1) cout << "B" << endl;
      if(i == 2) cout << "C" << endl;
    }
  }

}