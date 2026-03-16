#include <iostream>
#include <iomanip>

using namespace std;

double sum10(double a){
  double sum=0;
  for(int i=0;i<10;i++){
    sum+=a;
    if(i%2)
      a/=3.0;
    else
      a*=2.0;
  }
  return sum;
}
int main(){
  double a;
  while(cin>>a){
    cout<<setprecision(10)<<sum10(a)<<endl;
  }
}