#include<iostream>
#include<iomanip>
int main(){
  using namespace std;
  double a[10],b,c;
  while(cin>>b){
    c=0;
    a[0]=b;
    for(int i=1;i<10;i++)
      if(i%2==1)a[i]=a[i-1]*2;
      else a[i]=a[i-1]/3;
    for(int i=0;i<10;i++)
      c+=a[i];
    cout<<setprecision(8)<<c<<endl;
  }   
  return 0;
}