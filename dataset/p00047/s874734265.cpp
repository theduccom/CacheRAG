#include<iostream>
#include<algorithm>
#include<map>
#include<cstdio>
using namespace std;

int main(){

  map<char, int> cup;
  char c1, c2;

  cup['A'] = 1;
  cup['B'] = 0;
  cup['C'] = 0;

  while(scanf("%c, %c", &c1, &c2) != EOF){
    swap(cup[c1], cup[c2]);
  }

  if(cup['A'] == 1) cout << 'A' << endl;
  else if(cup['B'] == 1) cout << 'B' << endl;
  else cout << 'C' << endl;

  return 0;

}