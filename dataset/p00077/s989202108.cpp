#include <iostream>
#include <sstream>

using namespace std;

int main() {
  string tmp;
  while (cin >> tmp) {
    stringstream ss(tmp);
    char c;
    int status = 0;
    int a = 1;
    while (ss >> c) {
      switch (status) {
        case 0:
          if (c == '@')
            status = 1;
          else
            cout << c;
          break;
        case 1:
          a = c - '0';
          status = 2;
          break;
        case 2:
          for (int i = 0; i < a; ++i)
            cout << c;
          status = 0;
          break;
      }
    }
    cout << endl;
  }
}
