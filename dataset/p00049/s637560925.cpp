#include<iostream>
#include<string>

using namespace std;

int main(){
  int number, a=0, b=0, ab=0, o=0;
  char c;
  string blood;

  while(cin >> number >> c >> blood){
    if(blood == "A")
      a++;
    else if(blood == "B")
      b++;
    else if(blood == "AB")
      ab++;
    else if(blood == "O")
      o++;
  }

  cout << a << endl;
  cout << b << endl;
  cout << ab << endl;
  cout << o << endl;

  return 0;
}