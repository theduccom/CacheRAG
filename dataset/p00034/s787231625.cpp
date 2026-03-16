#include<iostream>
using namespace std;
int main(){
  char g;
  double len[11],total=0;
  double train1,train2;
  double a;
  while(1){
    total=0;
  for(int i=0;i<10;i++){
    cin >> len[i] >> g;
    total+=len[i];
  }
  cin >> train1 >> g >> train2;
  if(cin.eof()) break;
  a=total/(train1+train2);
  a*=train1;
  total=0;
  int i=0;
  while(a>total){
    total+=len[i];
    i++;
  }
  cout << i << endl;
  }
}