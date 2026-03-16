#include <cstdio>
using namespace std;
double sequence(double a) {
  double s[10];
  double sum = 0;
  for(int i = 0; i < 10; ++i) {
	if(i == 0) {
	  s[i] = a;
	}
	else if(i % 2) { // odd
	  s[i] = s[i - 1] * 2;
	}
	else { // even
	  s[i] = s[i - 1] / 3;
	}
	sum += s[i];
  }
  return sum;
}
int main() {
  double a;
  while(~scanf("%lf", &a)) {
	printf("%.8f\n", sequence(a));
  }
  return 0;
}