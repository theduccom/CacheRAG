#include<iostream>
using namespace std;
int main(){
  int w;
  while(1){
  int m=3130;
    cin >> w;
    if(w==-1)break;
    w-=10;
    for(int i=0;w>0;i++){
      if(i<10)m-=125;
      if(i>=10&&i<20)m-=140;
      if(i>=20&&i<30)m-=160;
      if(i>=30)m-=160;
      w--;
    }
    cout << m << endl;
  }
  return 0;
}