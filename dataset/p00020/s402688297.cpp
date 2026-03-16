#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

int n;
char buf[10000];
string ans;

int main() {
  fgets(buf, 1000, stdin);
  n = strlen(buf);

  for (int i=0; i<n; i++) {
    char c = buf[i];
    if ('a' <= c && c <= 'z') {
      ans += 'A'+(c-'a');
    } else ans += c;
  }

  printf("%s", ans.c_str());
}