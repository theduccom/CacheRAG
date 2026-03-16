#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
  int n,a=0,b=0,o=0,ab=0;
  string s;

  while(scanf("%d,",&n)!=EOF){
    cin >> s;
    if(s == "A")a++;
    else if(s == "B")b++;
    else if(s == "O")o++;
    else if(s == "AB")ab++;
  }
  cout << a << endl << b << endl << ab << endl << o << endl;


}