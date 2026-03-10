#include<iostream>
using namespace std;
int main(){
  int a;
  for(int i=1;i<=9;i++){
    for(int j=1;j<=9;j++){
      a=i*j;
      cout<<i<<"x"<<j<<"="<<a<<endl;
    }
  }
}

