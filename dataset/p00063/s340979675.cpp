#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
  int i,j,count=0;
  string s;

  while(getline(cin,s)){
    string n = s;
    reverse(s.begin(),s.end());
    if(n == s)count++;
  }
  cout << count << endl;
}