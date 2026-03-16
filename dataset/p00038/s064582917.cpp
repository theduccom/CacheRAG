#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

const int N = 5;
int c[N];

bool isStraight() {
  if(c[0] == 1 && c[1] == 10 &&
     c[2] == 11 && c[3] == 12 && c[4] == 13) return true;
  for(int i = 1; i < N; ++i) {
    if(c[i-1]+1 !=  c[i]) return false;
  }
  return true;
}

bool isTwoPair() {
  int num = 0;
  for(int i = i; i < N; ++i) {
    if(c[i-1] == c[i]) {
      ++num;
      while(c[i-1] == c[i]) ++i;
    }
  }
  return num == 2;
}

int main() {
  string s;
  while(cin >> s) {
    replace(s.begin(), s.end(), ',', ' ');
    stringstream ss(s);
    for(int i = 0; i < N; ++i) ss >> c[i];
    sort(c,c+N);
    if(c[0] == c[3] || c[1] == c[4]) {
      cout << "four card" << endl;
    } else if(c[0] == c[2] && c[3] == c[4] ||
	      c[0] == c[1] && c[2] == c[4]) {
      cout << "full house" << endl;
    } else if(isStraight()) {
      cout << "straight" << endl;
    } else if(c[0] == c[2] || c[1] == c[3] || c[2] == c[4]) {
      cout << "three card" << endl;
    } else if(isTwoPair()) {
      cout << "two pair" << endl;
    } else if(c[0] == c[1] || c[1] == c[2] || c[2] == c[3] || c[3] == c[4]) {
      cout << "one pair" << endl;
    } else {
      cout << "null" << endl;
    }
  }
 return 0;
}