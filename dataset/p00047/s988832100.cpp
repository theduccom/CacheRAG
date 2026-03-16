#include <iostream>
using namespace std;

int main(){
  char alpha1, alpha2, komma;
  char current='A';

  while(cin>>alpha1>>komma>>alpha2){
    if(alpha1!=current && alpha2!=current) continue;
    if(alpha1==current) current=alpha2;
    else current=alpha1;
  }
  cout<<current<<endl;

  return 0;
}