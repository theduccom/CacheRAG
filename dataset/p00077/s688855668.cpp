#include<iostream>
#include<string>
using namespace std;


int main(){
  string str;
  int count;
  while(cin>>str){
 for(int i=0;i<str.size();i++){
   if(str[i]=='@'){
     i++;
     count=i+1;
      for(int j=0;j<str[i]-'0';j++){
      cout<<str[count];
      }
      i++;
      continue;
   }
   cout<<str[i];
 }
 cout<< endl;
  }
 return 0;

}