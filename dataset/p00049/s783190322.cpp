#include <iostream>
#include <string>
using namespace std;

int main() {

  int n;
  char c;
  string input;
  int ans[4] = {0};

  while( cin >> n >> c >> input ) {

    if ( input == "A" ) {
      ans[0]++;
    }else if ( input == "B" ) {
      ans[1]++;
    }else if ( input == "O" ) {
      ans[3]++;
    }else {
      ans[2]++;
    }

  }

  cout << ans[0] << endl << ans[1] << endl << ans[2] << endl << ans[3] << endl;

  return 0;

}