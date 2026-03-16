#include <bits/stdc++.h>
using namespace std;
//????????????????????????????????????
void Check(const string& str){
  string strparent=str;
  int gap=1;
  while(strparent.find("the")==(string::npos)&&
        strparent.find("this")==(string::npos)&&
        strparent.find("that")==(string::npos)){
    for(int i=0;i<str.length();i++){
      if(!isalpha(str[i]))continue;//" "
      //strparent[i]=(gap+str[i]-'a')%26+'a';
      strparent[i]=(gap+str[i])%26+'a';
    }
    gap++;
  }
  cout<<strparent<<endl;
}

int main(){
  string str;
  while(getline(cin,str)){
    Check(str);
  }
}