#include <iostream>
#include <iomanip>
double r(double b,int i,double sum){
  if(i==11)return sum;
  if(!(i%2))b*=2;
  else{b/=3;}
  return r(b,i+1,sum+b);
}
int main(){
  double n;
  while(std::cin>>n){
    if(std::cin.eof())break;
    std::cout<<std::fixed<<std::setprecision(8)<<r(n,2,n)<<std::endl;
  }
  return 0;
}