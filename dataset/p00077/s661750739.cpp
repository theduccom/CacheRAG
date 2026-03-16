#include<iostream>
#include<string>
using namespace std;

int main(){

  string str;

  while(cin >> str){
    int len = str.length();
    for(int i=0; i<len; i++){
      if(str[i] != '@'){
        cout << str[i];
      }
      else{
        int n = (int)str[i+1] - '0';
        char c = str[i+2];
        for(int j=0; j<n; j++){
          cout << c;
        }
        i += 2;
      }
    }
    cout << endl;
  }

  return 0;

}