#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
  vector<string> strarray;
  string str;
  while(cin>>str){
    strarray.push_back(str);
  }

  int count=0;
  for(string str:strarray){
    bool sym=true;
    int length=str.length();
    if(length==1){
      count++;
      continue;
    }
    for(int i=length/2+length%2;i<length;i++){
      sym&=(str[i]==str[length-1-i]);
    }
    if(sym){
      count++;
    }
  }
  cout<<count<<endl;

}