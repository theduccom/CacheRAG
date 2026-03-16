#include<iostream>
using namespace std;

int main(void){
  int cost, amount;
  int sum=0;
  int i=0, temp=0;
  int ave;
  char canma;

  while(cin >> cost >> canma >> amount){
    sum += cost * amount;
    temp+=amount;
    i++;
  }

  ave = (float)temp/(float)i + 0.5;

  cout << sum << endl << ave << endl;

  return 0;
}