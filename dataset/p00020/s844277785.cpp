#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
  char s[210];
  fgets(s, sizeof(s), stdin);
  size_t len = strlen(s);
  for (size_t i = 0; i < len; ++i) {
    s[i] = toupper(s[i]);
  }
  printf("%s", s);
}
