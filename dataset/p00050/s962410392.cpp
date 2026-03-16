#include <iostream>
#include <string>
using namespace std;

int main(){
  string text;
  getline(cin,text,'\n');
  int k=0;
  while(true){
    if(text.find("apple",k)!=-1&&text.find("apple",k)<text.find("peach",k)){
      k = text.find("apple",k);
      text = text.substr(0,k)+"peach"+text.substr(k+5);
      k++;
    }
    else{
      if(text.find("apple",k)==text.find("peach",k))
	break;
      k = text.find("peach",k);
      text = text.substr(0,k)+"apple"+text.substr(k+5);
      k++;
    }
  }
  cout << text << endl;
  return 0;
}