#include <iostream>
#include <string>
using namespace std;
int main (int argc, char const* argv[]) {
  string right = "Hoshino";
  int N;
  cin >> N;
  cin.ignore();
  for (int z = 1; z <= N; z += 1) {
    string line;
    getline(cin, line);
    for (int i = 0; i < line.size(); i += 1) {
      if (line[i] == 'H') {
        if (line.size() >= i + right.size()) {
          bool flag = true;
          for (int j = 0; j < right.size(); j += 1) {
            if (right[j] != line[i+j]) {
              flag = false;
              break;
            }
          }
          if (flag) {
            line[i+right.size()-1] = 'a';    
          }
        }
      }
    }
    cout << line << endl;
    //
  }
  return 0;
}