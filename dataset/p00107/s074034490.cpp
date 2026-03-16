#include <cstdio>

int d, w, h, n, r;

int main() {
  while (scanf("%d %d %d", &d, &w, &h), d || w || h) {
    scanf("%d", &n);
    
    int line[3];
    line[0] = d*d + w*w;
    line[1] = w*w + h*h;
    line[2] = h*h + d*d;
    for (int i=0; i<n; i++) {
      scanf("%d", &r);
      int r2 = r*r*4;
      
      if (line[0] < r2 || line[1] < r2 || line[2] < r2) {
	printf("OK\n");
      } else {
	printf("NA\n");
      }
    }
  }
}