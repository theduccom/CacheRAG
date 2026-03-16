#include<iostream>
#include<string>
using namespace std;

int main(){
  string cup[3]={"A","B","C"},be,af;
  char mo[3];
  int pla[3]={1,0,0},tmp[2];
  while(cin >> mo[0]){
    cin >> mo[1];
    cin >> mo[2];
    be = mo[0];
    af = mo[2];
    for(int i=0;i<3;i++){
      if(be == cup[i]){
	tmp[0]=i;
      }
      if(af == cup[i]){
	tmp[1]=i;
      }
    }
    swap(pla[tmp[0]],pla[tmp[1]]);
  }
  for(int i=0;i<3;i++){
    if(pla[i] == 1){
      cout << cup[i] << endl;
      break;
    }
  }
}