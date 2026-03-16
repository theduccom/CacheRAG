#include<iostream>
using namespace std;
int main(){
  double a;
  int N;  
  while(cin>>a){
  N=(int)((a/9.8)*(a/9.8)*4.9+5)/5+1;
  cout<<N<<endl;
  }
  return 0;
}