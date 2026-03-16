#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
  while (true) {
    int size[3];
    scanf("%d %d %d", size, size + 1, size + 2);
    if (size[0] == 0 && size[1] == 0 && size[2] == 0) { break; }
    sort(size, size + 3);
    int squared_chord = size[0] * size[0] + size[1] * size[1];

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
      int radius;
      scanf("%d", &radius);
      int squared_diameter = 4 * radius * radius;
      puts(squared_diameter > squared_chord ? "OK" : "NA");
    }
  }

  return 0;
}