#include<iostream>
#include<cstdio>
using namespace std;

string alpha = "IVXLCDM";
int val[] = {1, 5, 10, 50, 100, 500, 1000};

int indexOf(int ch) {
  for(int i = 0; i < (int)alpha.size(); i++) {
    if( alpha[i] == ch )
      return i;
  }
  return -1;
}

int main() {
  for(string str; cin >> str; ) {
    int sum = 0;
    for(int i = 0; i < (int)str.size(); i++) {
      if ( i + 1 < (int)str.size() && indexOf( str[i] ) < indexOf(str[i + 1]) ) {
          sum -= val[indexOf(str[i])];
        } else {
          sum += val[indexOf(str[i])];
        }
        }
      cout << sum << endl;
    }
    return 0;
  }