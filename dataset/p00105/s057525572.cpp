#include <cstdio>
#include <cstdint>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

int main() {
  std::map<std::string, std::vector<int>> index;
  while (true) {
    char buf[32];
    int p;
    if (scanf("%s %d", buf, &p) == EOF) break;
    index[buf].push_back(p);
  }

  for (auto &p: index) {
    printf("%s\n", p.first.c_str());
    auto v=p.second;
    std::sort(v.begin(), v.end());
    for (size_t i=0; i<v.size(); ++i)
      printf("%d%c", v[i], i+1<v.size()? ' ':'\n');
  }
}

