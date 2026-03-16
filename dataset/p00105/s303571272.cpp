#include <algorithm>
#include <cstdio>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
  map<string, vector<int>> index;
  char *line = NULL;
  size_t buffer_size = 0;
  while (getline(&line, &buffer_size, stdin) > 0) {
    char word[40];
    int page;
    sscanf(line, "%s %d", word, &page);
    string key(word);
    index[key].push_back(page);
  }
  free(line);
  for (const auto& entry : index) {
    printf("%s\n", entry.first.c_str());
    vector<int> pages(entry.second);
    sort(pages.begin(), pages.end());
    for (auto iter = pages.cbegin(); iter != pages.cend(); ++iter) {
      printf("%d%c", *iter, (iter + 1 == pages.cend() ? '\n' : ' '));
    }
  }

  return 0;
}