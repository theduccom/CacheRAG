#include <iostream>
#include <vector>
#include <string>
#include <cstdio>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  vector<string> vs;
  scanf("%d\n", &n);
  for (int i = 0; i < n; i++) {
    string tmp;
    getline(cin, tmp);
    int j = 0;
    while ((j = tmp.find("Hoshino", j)) != string::npos) {
      tmp[j+6] = 'a';
      j += 7;
    }
    vs.push_back(tmp);
  }

  for (int i = 0; i < vs.size(); i++)
    cout << vs[i] << endl;
  return 0;
}