#include <iostream>
#include <vector>
#include <utility>
#include <cstdio>
using namespace std;

typedef pair<int, int> pii;

int main(void) {
  int n1, n2;
  vector<pii> sales;
  while (scanf("%d,%d", &n1, &n2) == 2) {
    sales.push_back(make_pair(n1, n2));
  }

  int ave_sales, sum = 0;
  double cmp_num, num = 0.0;
  for (int i = 0; i < sales.size(); i++) {
    sum += sales[i].first * sales[i].second;
    num += sales[i].second;
  }

  num /= sales.size();
  cmp_num = (double)(int)num;

  if (num > cmp_num) {
    ave_sales = (int)num + 1;
  } else {
    ave_sales = (int)num;
  }

  cout << sum << endl;
  cout << ave_sales << endl;

  return 0;
}