//Plastic Board
#include<bits/stdc++.h>
using namespace std;

int main(){
  char t;
  int a, b, c;
  int s1=0, s2=0;
  while(cin >> a >> t >> b >> t >> c){
    if(a*a+b*b==c*c) s1++;
    if(a==b)s2++;
  }
  cout << s1 << endl;
  cout << s2 << endl;
  return 0;
}