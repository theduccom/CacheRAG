#include<iostream>
#include<string>
using namespace std;
int main(){
  string text;
  int num=0,i;
  while(cin>>text){
    for(i=0;i<text.size();i++){
      if(text[i]!=text[text.size()-i-1])break;
    }
    if(i==text.size())num++;
  }  
  cout<<num<<endl;
}