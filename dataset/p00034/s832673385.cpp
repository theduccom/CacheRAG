#include <cstdio>
using namespace std;

int total;
int ls[10];
int vs[2];

int main() {
  while (1) {
    total = 0;
    for (int i=0; i<10; i++) {
      if (scanf("%d", &ls[i]) != 1) return 0;
      getchar();
      total += ls[i];
    }
    scanf("%d,%d", &vs[0], &vs[1]);

    double p = (double(vs[0])/(vs[0]+vs[1])) * total;
    int sum = 0;
    for (int i=0; i<10; i++) {
      sum += ls[i];
      if (sum >= p) {
        printf("%d\n", i+1);
        break;
      }
    }
  }
}