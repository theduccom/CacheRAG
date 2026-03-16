#include <cstdio>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int page;
char buf[100000];
map<string, vector<int> > table;

int main() {
  while (1) {
    if (scanf(" %s%d", buf, &page) != 2) break;
    table[buf].push_back(page);
  }

  for (auto itr=table.begin(); itr!=table.end(); itr++) {
    sort(itr->second.begin(), itr->second.end());
    itr->second.erase(unique(itr->second.begin(), itr->second.end()), itr->second.end());

    printf("%s\n", itr->first.c_str());
    printf("%d", itr->second[0]);
    for (int i=1; i<itr->second.size(); i++) {
      printf(" %d", itr->second[i]);
    }
    puts("");
  }
}