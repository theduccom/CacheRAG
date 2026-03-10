#include<iostream>
using namespace std;

int main(){

  int hoge;

  for(int i = 1; i < 10; i++){
    for(int j = 1; j < 10; j++){
      hoge = i * j;
      cout<<i<<"x"<<j<<"="<<hoge<<endl;
    }
  }
  
  return 0;
}