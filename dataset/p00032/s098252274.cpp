#include<iostream>
#include<cstdio>
using namespace std;

int main(){

  int cnt_s, cnt_r, b[3];

  cnt_s = 0;
  cnt_r = 0;
  while(scanf("%d, %d, %d", &b[0], &b[1], &b[2]) != EOF){
    if(b[0] * b[0] + b[1] * b[1] == b[2] * b[2]){
      if(b[0] != b[1]){
        cnt_s++;
      }
    }
    else if(b[0] == b[1]){
      cnt_r++;
    }
  }

  cout << cnt_s << endl << cnt_r << endl;

  return 0;

}