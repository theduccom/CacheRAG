#include<iostream>
using namespace std;

int main(){

 int a, b, c;
 int i, j;

 for(i = 1; i < 10; i++){
  for(j = 1; j < 10; j++){
   c = i * j;
   cout << i << "x" << j << "=" << c << endl;
  }
 }
 
 return 0;
}