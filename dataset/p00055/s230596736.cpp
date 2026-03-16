#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double a;
  while(cin>>a){
    double s=0.0;
    s+=a;
    for(int i=2;i<=10;i++){
      if(i%2) a/=3;
      else a*=2;
      s+=a;
    }
    cout<<fixed<<setprecision(8)<<s<<endl;
  }
  return 0;
}