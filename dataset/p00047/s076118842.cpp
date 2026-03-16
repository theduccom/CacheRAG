#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std; 
int main(){
  char x,y,z;
  char P='A';
  while(cin>>x>>z>>y){
    if(x!=P&&y!=P){
      continue;
    }
    else if(x==P){
      P=y;continue;
    }
    else if(y==P){
      P=x;
    }
  }
  cout<<P<<endl;
    
return 0;
}