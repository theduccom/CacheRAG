#include <cstdio>
#include <string>
#include <map>
using namespace std;

char buf[1000];
map<string, int> cnt;

int main() {
  while (1) {
    int _;
    if (scanf("%d,", &_) != 1) break;
    scanf("%s", buf);
    cnt[buf]++;
  }

  printf("%d\n", cnt["A"]);
  printf("%d\n", cnt["B"]);
  printf("%d\n", cnt["AB"]);
  printf("%d\n", cnt["O"]);
}