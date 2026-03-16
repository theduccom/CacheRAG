#include <cstdio>
#include <algorithm>
using namespace std;

bool exists_ball[3];

int main() {
  exists_ball[0] = true;

  while (1) {
    char a, b;
    if (scanf(" %c,%c", &a, &b) != 2) break;
    swap(exists_ball[a-'A'], exists_ball[b-'A']);
  }

  for (int i=0; i<3; i++) {
    if (exists_ball[i]) printf("%c\n", 'A'+i);
  }
}