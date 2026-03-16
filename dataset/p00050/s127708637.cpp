#include<iostream>
#include<cstdio>
using namespace std;

string replace(string a,string b,int pos){
  for(int i=0;i<(int)b.size();i++)a[pos+i] = b[i];
  return a;
}

int main(){
  char str[1025];
  string ans;

  while(fgets(str,1025,stdin)!=NULL){
    ans = str;
 
    for(int i=0;i<(int)ans.size()-4;i++){
      string tmp = ans.substr(i,5);
      if(tmp == "apple")ans = replace(ans,"peach",i);
      if(tmp == "peach")ans = replace(ans,"apple",i);
    }
    cout << ans;
  }
}