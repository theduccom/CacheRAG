#include <algorithm>
#include <cstdio>
#include <unordered_map>
#include <utility>
#include <vector>

using namespace std;

int main() {
  while (true) {
    int n;
    scanf("%d", &n);
    if (n == 0) { break; }

    int insert_order = 0;
    unordered_map<int, int> insert_orders;
    unordered_map<int, unsigned long> sales;
    for (int i = 0; i < n; ++i) {
      int id, unit_cost, count;
      scanf("%d %d %d", &id, &unit_cost, &count);
      if (insert_orders.count(id) == 0) {
        insert_orders[id] = ++insert_order;
      }
      sales[id] += unit_cost * count;
    }
    typedef pair<int, unsigned long> Record;
    vector<Record> sales_result(sales.cbegin(), sales.cend());
    sort(
        sales_result.begin(),
        sales_result.end(),
        [&](const Record& a, const Record& b) {
          return insert_orders[a.first] < insert_orders[b.first];
        });
    bool exists = false;
    for (const auto& record : sales_result) {
      if (record.second < 1000000) { continue; }
      exists = true;
      printf("%d\n", record.first, record);
    }
    if (!exists) { puts("NA"); }
  }

  return 0;
}