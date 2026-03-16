#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

char buf[10000];

int main() {
  while (1) {
    if (scanf("%s", buf) != 1) return 0;

    int n = strlen(buf);
    string ans;

    for (int i=0; i<n; i++) {
      char c = buf[i];
      if (c != '@') ans += c;
      else {
        ans += string((buf[i+1]-'0'), buf[i+2]);
        i += 2;
      }
    }

    printf("%s\n", ans.c_str());
  }
}