#include<iostream>
#include<string>
#include<map>
#include<cstdio>
using namespace std;
int main(){
  map<string, int> m;
  char s[3];
  int i;

  while(scanf("%d,%s",&i,s)!=EOF)
    m[string(s)]++;

  cout << m["A"] << endl << m["B"] << endl << m["AB"] << endl << m["O"] << endl;

}