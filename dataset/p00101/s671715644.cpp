#include<iostream>
#include<string>
using namespace std;

int main(){
  int n;
  char c;
  string text;
  cin>>n;
  getline(cin,text,'\n');
  for(;n>0;n--){
    getline(cin,text,'\n');
    while(text.find("Hoshino")!=-1){
      int f = text.find("Hoshino");
      text = text.substr(0,f)+"Hoshina"+text.substr(f+7);
    }
    cout<<text<<endl;
  }
  return 0;
}