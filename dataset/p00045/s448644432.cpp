#include <iostream>
#include <cmath>
using namespace std;

int main(void){
  int a,b,cnt=0,sum=0,sum2=0;
  char ch;

  while(cin>>a>>ch>>b){
    sum += a * b;
    sum2 += b;
    cnt++;
  }
  cout<<sum<<endl<<round((double)sum2/cnt)<<endl;

  return 0;
}