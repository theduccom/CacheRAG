#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  int x,y;
  char c;
  int sum=0,ave=0;
  int cnt = 0;
  while(  cin >> x >> c >> y){
    sum+=x*y;
    ave+=y; 
    cnt++;
  }
  ave = (double)ave/cnt + 0.5;
  cout << sum << "\n" << ave << endl;
}