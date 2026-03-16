#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

int n;
char buf[1000000];

int main() {
  scanf("%d ", &n);
  while (n--) {
    fgets(buf, sizeof(buf), stdin);
    
    string ans(buf);
    while (1) {
      int pos = ans.find("Hoshino");
      if (pos == string::npos) break;
      ans = ans.replace(pos, strlen("Hoshino"), "Hoshina");
    }
    printf("%s", ans.c_str());
  }
}