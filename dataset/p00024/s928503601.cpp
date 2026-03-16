#include <cmath>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main() {
  char *line = NULL;
  size_t buffer_size = 0;
  while (getline(&line, &buffer_size, stdin) > 0) {
    double required_velocity;
    sscanf(line, "%lf", &required_velocity);
    double required_time = required_velocity / 9.8;
    double required_height = 4.9 * required_time * required_time;
    double required_floor = ceil(required_height / 5.0) + 1.0;
    printf("%.0f\n", required_floor);
  }
  free(line);

  return 0;
}