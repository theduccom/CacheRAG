#include<cstdio>
#include<algorithm>
#include<iostream>
#include<map>
#include<string>
#include<cstring>
using namespace std;
map <string,int> ke;
main(){
  int n;
  char k[256];
  while(scanf("%d,%s",&n,k)!=EOF){
    string st=k;
    ke[st]++;
  }
  cout << ke["A"] << endl;
  cout << ke["B"] << endl;
  cout << ke["AB"] << endl;
  cout << ke["O"] << endl;
}