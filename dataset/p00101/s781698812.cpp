#include <iostream>
using namespace std;
#include <string>

int main() {
  int n;
  cin >> n;
  cin.ignore();
  for (int i = 0; i < n; i++) {
    string sentence;
    getline(cin, sentence);
    int j = 0;
    while(1) {
      j = sentence.find("Hoshino", j);
      if (j == string::npos) break;
      sentence.replace(j, 7, "Hoshina");
    }
    cout << sentence << endl;
  }
  return 0;
}
