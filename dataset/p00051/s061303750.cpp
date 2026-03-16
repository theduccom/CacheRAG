#include <cstdio>
#include <algorithm>
#include <functional>
using namespace std;

int n;
int nums[8];

int main() {
  scanf("%d", &n);
  while (n--) {
    for (int i=0; i<8; i++) {
      scanf("%1d", &nums[i]);
    }
    sort(nums, nums+8);

    int mini = 0;
    for (int i=0; i<8; i++) {
      mini = mini*10 + nums[i];
    }

    sort(nums, nums+8, greater<int>());

    int maxi = 0;
    for (int i=0; i<8; i++) {
      maxi = maxi*10 + nums[i];
    }

    printf("%d\n", maxi-mini);
  }
}