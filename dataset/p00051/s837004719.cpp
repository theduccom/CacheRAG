#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;

int main(){

  int in;

  cin >> in;
  for(int i = 0; i < in; i++){

    string num;

    cin >> num;

    sort(num.begin(), num.end());

    stringstream ss(num);
    int a;
    ss >> a;

    reverse(num.begin(), num.end());

    stringstream aa(num);
    int b;
    aa >> b;

    cout << b-a << endl;
    
  }
  return 0;
}