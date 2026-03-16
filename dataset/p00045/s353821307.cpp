#include<iostream>
using namespace std;
int main(){
  int sum=0;
  float ava=0;
  int ta,kz;
  int cou=0;
  char ten;
  while(cin>>ta>>ten>>kz){
    sum=(ta*kz)+sum;
    ava=ava+kz;
    cou++;
  }
  ava=ava/cou;
  ava=ava+0.5;
  cout<<sum<<endl<<(int)ava<<endl;
}