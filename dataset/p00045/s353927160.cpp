#include<iostream>
#include<cstdio>

using namespace std;

int main() {
  int a, b, n, sum_a, sum_b;
  sum_a = sum_b = n = 0;
  
  while(scanf("%d,%d", &a, &b) != EOF) {
    sum_a += (a * b);
    sum_b += b;
    n++;
    getchar();
  }
  //  cout << sum_b << endl;
  cout << sum_a  << endl << int(sum_b*1.0  / n + 0.5) << endl;

  return 0;
}

    