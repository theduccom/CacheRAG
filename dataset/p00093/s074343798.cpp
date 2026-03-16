#include<iostream>
using namespace std;
bool leap(int Y){
  if(Y%4==0)
    return( (Y%100==0)?( (Y%400==0)?true:false ):true ); 
  else return false;
}
 
int main(){
  int Y,aY;
  int cont=0;
  int n=0;
  while(cin>>Y>>aY){
    if(Y==0 && aY==0) break;
    if(n) cout<<endl;
    for(int i=Y;i<=aY;i++) if(leap(i)){
        cout<<i<<endl;
        cont++;
      }
    if(cont==0) cout<<"NA"<<endl;
    n++;
    cont=0;
  }
}