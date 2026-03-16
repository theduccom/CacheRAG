#include<iostream>
#include<string>
using namespace std;

int main(){

  int n,a = 0,b = 0,o = 0,ab = 0;
  string str;
  char s;

  while(cin >> n >> s >> str){

    if(str == "A") a++;
    else if(str == "B") b++;
    else if(str == "O") o++;
    else if(str == "AB") ab++;

  }

  cout << a << endl << b << endl << ab << endl << o << endl;

}