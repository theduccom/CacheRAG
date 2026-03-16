#include <cctype>
#include <cstdio>

using namespace std;

int main() {
  int c;
  while ((c = getchar()) != EOF) {
    putchar(islower(c) ? toupper(c) : c);
  }
  return 0;
}