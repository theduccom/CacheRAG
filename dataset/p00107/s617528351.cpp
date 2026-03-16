#include<iostream>
using namespace std;

int main(){
  int a,b,c,n;
  int ent,flag;

  while(1){
    cin >> a >> b >> c;
    if(!a && !b && !c)break;

    cin >> n;
    for(int i=0;i<n;i++){
      cin >> ent;
      ent *= 2;
      flag = 0;
      if(a*a + b*b < ent*ent)flag = 1;
      if(b*b + c*c < ent*ent)flag = 1;
      if(c*c + a*a < ent*ent)flag = 1;
      if(flag)cout << "OK" << endl;
      else cout << "NA" << endl;
    }

  }
}