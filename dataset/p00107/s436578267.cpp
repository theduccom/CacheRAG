#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
  int size[3];
  while(~scanf("%d %d %d", &size[0], &size[1], &size[2]) && size[0] && size[1] && size[2]){
      sort(size, size + 3);
      double can = sqrt(size[0] * size[0] + size[1] * size[1]);
      int n;
      scanf("%d", &n);
      while(n--){
        int r;
        scanf("%d", &r);
        printf("%s\n", can < r * 2 ? "OK" : "NA");
      }
  }
  return 0;
}