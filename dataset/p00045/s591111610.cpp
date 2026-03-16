#include <iostream>
using namespace std;

int main() {

  int input1,input2;
  char c;

  int cnt = 0;
  int num = 0;
  int a = 0;

  while( cin >> input1 >> c >> input2 ) {

    cnt += input1*input2;
    num += input2;
    a++;

  }

  int out = num/a;
  if ( (num%a) >= (a+1)/2 ) out++;

  cout << cnt << endl << out << endl;

  return 0;

}