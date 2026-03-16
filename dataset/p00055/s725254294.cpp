#include <iostream>
using namespace std;

double oddsequence(double a) {
  return a / 3.0;
}

double evensequence(double a) {
  return a * 2.0;
}

int main() {
  double a[11] = {0};
  double sum;
  while (cin >> a[1]) {
    for(int i=1;i<10;i++) {
      if((i + 2) % 2 == 0) { //i = even
        a[i+1] = oddsequence(a[i]);
      }
      else { //i = odd
        a[i+1] = evensequence(a[i]);
      }
    }
    for(int i=1;i<11;i++) {
      sum += a[i];
    }
    printf("%.8lf\n",sum);
    sum = 0;
  }
}