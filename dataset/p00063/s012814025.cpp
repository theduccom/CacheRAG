#include<iostream>
#include<string>

using namespace std;

int main(void){
  string buf;
  int cnt = 0;
  while(getline(cin,buf),buf!=""){
    bool ans = true;
    for(int i = 0 ; i < buf.size()/2 ; i ++){
      if(buf[i]!=buf[buf.size()-i-1]){
        ans = false;
        break;
      }
    }
    if(ans)cnt++;
  }
  cout<<cnt<<endl;
}