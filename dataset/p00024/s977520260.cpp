#include <iostream>
#include <cstdio>
using namespace std;
int LeastHeight(double v) {
  double y;
  int N;
  y = v * v / 19.6;
  N = int((y + 5) / 5 + 1);
  return N;
}

int main() {
  double v;
  while(cin >> v) {
	cout << LeastHeight(v) << endl;
  }
  //data();
  return 0;
}


/*-- check --*/
void data() {
  double v, y, t;
  int N;

  printf("t\tv\ty\tN\n");
  for(t = 1; t <=10; t += 0.5) {
	v = 9.8 * t;
	y = v * v / 19.6;
	N = int((y + 5) / 5 + 1);
	printf("%.1f\t%.2f\t%.2f\t%d\n", t, v, y, N);
  }
}