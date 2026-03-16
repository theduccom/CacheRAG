#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int a,A=0,B=0,O=0,z=0;
  char ti[3];
  while(scanf("%d,%s",&a,ti)>0){
    if(ti[0] == 'B'){
      B++;
    }
    else if(ti[0] == 'O'){
      O++;
    }
    else if(ti[1] == 'B'){
      z++;
    }
    else if(ti[0] == 'A'){
      A++;
    }
  }
  cout << A << endl << B << endl << z << endl << O << endl;
  return 0;
}