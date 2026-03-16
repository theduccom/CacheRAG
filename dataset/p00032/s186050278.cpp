#include <iostream>

using namespace std;

int main () {
  int a, b, c;
  int hishi = 0, rect = 0;
  
  while(cin >> a){
    cin.ignore();
    cin >> b;
    cin.ignore();
    cin >> c;

    if(a == b)
      hishi++;
    if(a * a + b * b == c * c)
      rect++;
  }

  cout << rect << endl << hishi << endl;

}