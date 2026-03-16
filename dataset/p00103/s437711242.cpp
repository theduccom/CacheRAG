#include <cstdio>
#include <string>
using namespace std;

int n;
char buf[1000000];

int main() {
  scanf("%d ", &n);
  while (n--) {
    int cnt = 0;
    int score = 0;
    bool runner[4] = {false};

    while (cnt < 3) {
      runner[0] = true;

      scanf("%s", buf);
  
      string s(buf);
      if (s == "HIT") {
        if (runner[3]) score++;
        for (int i=2; i>=0; i--) {
          runner[i+1] = runner[i]; 
        }
      } else if (s == "HOMERUN") {
        for (int i=0; i<4; i++) {
          if (runner[i]) score++;
          runner[i] = false;
        }
      } else if (s == "OUT") {
        cnt++;
      }
    }

    printf("%d\n", score);
  }
}