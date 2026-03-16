#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  int a;
  int A,B,O,AB;
  char k;
  string b;

  A = B = AB = O = 0;

  while(cin >> a >> k >> b){
    if(b == "A"){
      A++;
    }
    if(b == "B"){
      B++;
    }
    if(b == "AB"){
      AB++;
    }
    if(b == "O"){
      O++;
    }
  }

  printf("%d\n%d\n%d\n%d\n", A, B, AB, O);

  return 0;
}