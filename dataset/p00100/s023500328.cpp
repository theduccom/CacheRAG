#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  vector<string> result;

  while (true) {
    cin >> n;
    if (n == 0)
      break;

    map<string, long long> m;
    bool hoge = true;
    for (int i = 0; i < n; i++) {
      string id;
      long long a, b;
      cin >> id >> a >> b;
      if (m[id] < 1000000 && m[id] + a * b >= 1000000) {
        result.push_back(id);
        hoge = false;
      }
      m[id] += a * b;
    }
    if (hoge)
      result.push_back("NA");
  }

  for (int i = 0; i < result.size(); i++)
    cout << result[i] << endl;
  return 0;
}