#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main(void)
{

  char a, b;
  char comma;  
  int  n[3] = {0};
  int s = 10000000;
  n[0] = true;
  while(cin >> a >> comma >> b){

    int temp   = n[a - 'A'];
    n[a - 'A'] = n[b - 'A'];
    n[b - 'A'] = temp;

  }

  for(int i = 0; i < 3; i++){
    if(n[i]){
      putchar('A'+i);
      putchar('\n');
    }
  }

  return 0;
}