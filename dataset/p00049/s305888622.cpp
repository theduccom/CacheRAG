#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main(){
  char blood[3];
  int num,a=0,b=0,o=0,ab=0;
  while(scanf("%d,%s",&num,blood) != EOF){
    if(blood[0] == 'A' && blood[1] == '\0'){
      a++;
    }
    else if(blood[0] == 'B'){
      b++;
    }
    else if(blood[0] == 'O'){
      o++;
    }
    else if(strcmp(blood,"AB") == 0){
      ab++;
    }
  }
  cout << a << endl << b << endl << ab << endl << o << endl;
}