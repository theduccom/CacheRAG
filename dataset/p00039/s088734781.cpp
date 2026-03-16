#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  while(cin >>s){
    int sum = 0, x = 1000, r;
    for(int i=0; i<s.size(); i++){
      if(s[i] == 'I'){r = 1;}
      if(s[i] == 'V'){r = 5;}
      if(s[i] == 'X'){r = 10;}
      if(s[i] == 'L'){r = 50;}
      if(s[i] == 'C'){r = 100;}
      if(s[i] == 'D'){r = 500;}
      if(s[i] == 'M'){r = 1000;}
      if(x>=r){sum+=r;x = r;}
      else{sum+=r-2*x;}
    }
    cout <<sum<<endl;
  }
  return 0;
}