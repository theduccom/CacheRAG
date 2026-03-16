#include <iostream>
using namespace std;

int main(){
  double b,v2,n;
  int i;
  while(cin>>b){
    i=0;
    n=0;
    v2=0;
    while(v2<b*b){
    i++;
    n+=5;
    v2=19.6*n;
    }
    cout<<i+1<<endl;
  }
    
    return 0;
}