#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;
int a[5];
bool is_straight()
{
  for (int i = 1; i < 5; i++) {
    if (a[i] != a[i - 1] + 1) {
      goto next;
    }
  }
  return true;
 next:
  if (a[0] == 1 && a[1] == 10 && a[2] == 11 && a[3] == 12 && a[4] == 13) {
    return true;
  }
  return false;
}


int main()
{
  while (scanf("%d" , &a[0]) == 1) {
    for (int i = 1; i < 5; i++) {
      scanf(",%d", &a[i]);
    }
    sort(a, &a[5]);
    /*for (int i = 0; i < 5; i++) {
      printf("%d ", a[i]);
    }
    printf("\n");*/
    vector<int> mx_v;
    int mx = 1;

    for (int i = 1; i < 5; i++) {
      if (a[i] == a[i - 1]) {
	mx++;
      } else {
	mx_v.push_back(mx);
	mx = 1;

      }
    }
    mx_v.push_back(mx);
    mx = *max_element(mx_v.begin(), mx_v.end());
    /*for (int i = 0; i < mx_v.size(); i++) {
      printf("mx[%d] = %d\n", i, mx_v[i]);
    }
    printf("mx = %d\n", mx);*/
    if (mx == 1) {
      if (is_straight()) {
	printf("straight\n");
	goto end;
      } else {
	printf("null\n");
	goto end;
      }
    } else if (mx == 2) {
      int c = 0;
      for (int i = 0; i < mx_v.size(); i++) {
	if (mx_v[i] == mx) {
	  c++;
	}
      }
      if (c >= 2) {
	printf("two pair\n");
	goto end;
      } else {
	printf("one pair\n");
	goto end;
      }
    } else if (mx == 3) {
      //printf("size = %d\n",mx_v.size());
      for (int i = 0;  i < mx_v.size(); i++) {
	if (mx_v[i] == 2) {
	  printf("full house\n");
	  goto end;
	}
      }
      printf("three card\n");
      goto end;
    } else if (mx == 4 || mx == 5) {
      printf("four card\n");
      goto end;
    } else {
      printf("null\n");
      goto end;
    }
  end:;
  }
}