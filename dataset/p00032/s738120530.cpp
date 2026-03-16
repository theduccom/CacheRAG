#include<iostream>

using namespace std;

int main(){

  int in[3];
  char trash;
  int sumr = 0, suml = 0;
  while(cin >> in[0] >> trash >> in[1] >> trash >> in[2]){
    if(in[0]+in[1] < in[2]) continue;
    if(in[0] * in[0] + in[1] * in[1] == in[2]*in[2]) sumr++;
    else if(in[0] == in[1]) suml++;
  }

  cout << sumr << endl << suml << endl;
  return 0;
}