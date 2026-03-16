#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main(){
  int num;int blood_a=0,blood_b=0,blood_ab=0,blood_o=0;
  char blood_type[3];
  while(scanf("%d,%s",&num,blood_type)!=EOF){
      if(blood_type[0]=='A'){
        if(blood_type[1]=='B')blood_ab++;
        else blood_a++;
      }
      else if(blood_type[0]=='B')blood_b++;
      else if(blood_type[0]=='O')blood_o++;
  }
  cout<<blood_a<<endl<<blood_b<<endl<<blood_ab<<endl<<blood_o<<endl;
}