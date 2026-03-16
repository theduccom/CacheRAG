#include<iostream>

using namespace std;

int main(){

  long long in;
  while(cin >> in && in){
    long long sum = 0,b = 5;;
    while(in >= b){
      sum+=in/b;
      b*=5;
    }
    cout << sum << endl;
  }
  return 0;
}