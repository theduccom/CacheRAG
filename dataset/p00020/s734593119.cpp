#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

int main(){
  int i;
  string str;
  getline(cin, str);
  for(i=0; i<str.length(); i++){
    if(isalpha(str[i]))putchar(toupper(str[i]));
    else putchar(str[i]);
  }
  cout << endl;
}