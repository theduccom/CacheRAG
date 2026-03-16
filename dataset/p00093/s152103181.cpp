#include <cstdio>

bool is_uruu(int y) {
  if (y % 400 == 0) return true;
  if (y % 100 == 0) return false;
  if (y % 4 == 0) return true;
  return false;
}

int testcase_ends(bool first) {
  int a, b;
  scanf("%d %d", &a, &b);
  if (a == 0 && b == 0) return 1;

  if (!first) puts("");

  bool na = true;
  for (int i = a; i <= b; ++i)
    if (is_uruu(i)) {
      printf("%d\n", i);
      na = false;
    }

  if (na) puts("NA");
  return 0;
}

int main() {
  bool first = true;
  while (!testcase_ends(first)) {
    first = false;
  }
}

