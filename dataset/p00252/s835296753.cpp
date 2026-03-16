#include<iostream>
#include<string>

using namespace std;

string IsOpen(int& a, int& b, int& c){
  if((a == 1 && b == 1 && c == 0) ||
     (a == 0 && b == 0 && c == 1)) return "Open";
  else return "Close";
}

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  cout << IsOpen(a, b, c) << endl;
  return 0;
}