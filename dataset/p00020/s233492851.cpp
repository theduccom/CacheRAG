#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(void){
  string s;
  getline(cin,s);
  for(int i = 0 ; i < s.size() ; i ++){
    printf("%c",toupper(s[i]));
	   }printf("\n");
    
}