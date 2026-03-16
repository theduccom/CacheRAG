#include <cstdlib>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
  char *line = NULL;
  size_t buffer_size = 0;
  while (getline(&line, &buffer_size, stdin) > 0) {
    int weight = atoi(line);

    vector<int> counter_weights;
    for (int i = 0; weight != 0 && i < 10; ++i) {
      int mask = 1 << i;
      if (weight & mask) { counter_weights.push_back(mask); }
      weight &= ~mask;
    }
    for (auto iter = counter_weights.begin();
         iter != counter_weights.end();
         ++iter) {
      printf("%d%c", *iter, iter + 1 == counter_weights.end() ? '\n' : ' ');
    }
  }
  free(line);

  return 0;
}