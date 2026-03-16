#include<iostream>
#include<string>

using namespace std;

int main() {
  int n, a;
  while (cin >> n, n) {
  int b[10] = {};
  for (int i = 0; i < n; i++) {
    cin >> a;
    b[a] += 1;
  }
  for (int i = 0; i < 10; i++) {
    if (b[i] > 0){
    string s(b[i], '*');
    cout << s << endl;
  } else if (b[i] <= 0) {
    cout << '-' << endl;
  }
  }
}
  return 0;
}

