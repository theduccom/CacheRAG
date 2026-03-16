#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  char blood[2];
  int n,type_num[4];
  string type[5] = {"A","B","AB","O"}; 

  for(int i = 0 ; i < 4 ; i++)type_num[i] = 0;

  while(~scanf("%d,%s ",&n,blood)){
    for(int i = 0; i < 4 ; i++ ){
      if(blood == type[i])type_num[i]++; 
    }
  }
  for(int i = 0; i < 4 ; i++ ){
    cout << type_num[i] << endl;
  }
  return 0;
}