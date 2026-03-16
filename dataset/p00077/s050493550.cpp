//27
#include<iostream>
#include<string>

using namespace std;

int main(){
  for(char c;cin.get(c);){
    if(c!='@'){
      cout<<c;
    }else{
      char r,l;
      cin>>r>>l;
      cout<<string(r-'0',l);
    }
  }
  return 0;
}