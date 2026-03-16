#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int a1,a2,a3,count1=0,count2=0,c,c1,c2;
  char b1,b2;
  while(cin>>a1>>b1>>a2>>b2>>a3){
    c=2*(sqrt((a1*a1-a3*a3/4)));
    c1=2*(sqrt(a3*a3+c*c));
    c2=(a1+a2)*2;
    if(a1*a1+a2*a2==a3*a3)
      count1++;
    else if(c2==c1)
      count2++;
  }
  cout<<count1<<endl<<count2<<endl;
  return 0;
}