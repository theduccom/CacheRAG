/*
   fuckin fuck fuck
 */

#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

typedef long long int LLI;

int n;
LLI total[1000000];
bool used[1000000];
vector<int> ans;
map<int, int> order;

bool cmp(int a, int b) {
  return order[a] < order[b];
}

int main() {
  while (1) {
    scanf("%d", &n);
    if (n == 0) return 0;

    fill(total, total+4010, 0);
    fill(used, used+4010, false);
    ans.clear();
    order.clear();

    for (int i=0; i<n; i++) {
      int id;
      LLI p, q;

      scanf("%d%lld%lld", &id, &p, &q);
      if (!order.count(id)) order[id] = i;

      total[id] += p*q;
      if (total[id] >= 1000000 && !used[id]) {
        ans.push_back(id);
        used[id] = true;
      }
    }

    sort(ans.begin(), ans.end(), cmp);
    for (int i=0; i<ans.size(); i++) {
      printf("%d\n", ans[i]);
    }

    if (ans.empty()) puts("NA");
  }
}