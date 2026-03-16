#include <cstdio>
#include <cstdlib>

using namespace std;

bool is_rectangle(int a, int b, int d) { return a * a + b * b == d * d; }

bool is_rhombus(int a, int b, int d) { return a == b; }

int main() {
  char *line = NULL;
  size_t buffer_size = 0;
  int num_rectangles = 0, num_rhombus = 0;
  while (getline(&line, &buffer_size, stdin) > 0) {
    int a, b, d;
    sscanf(line, "%d,%d,%d", &a, &b, &d);
    if (is_rectangle(a, b, d)) { ++num_rectangles; }
    if (is_rhombus(a, b, d)) { ++num_rhombus; }
  }
  free(line);

  printf("%d\n%d\n", num_rectangles, num_rhombus);

  return 0;
}