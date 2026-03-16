#include <iostream>
#include <string>
using namespace std;

int main() {

  int n;
  cin >> n;
  int outcnt = 0;
  int game = 0;
  int base = 0;
  int score = 0;
  while(1) {
    if(game == n) break;
    string str;
    cin >> str;
    if(str == "OUT") outcnt++;
    if(outcnt == 3) {
      cout << score <<endl;
      game++;
      outcnt = base = score = 0;
      continue;
    }
    if(str == "HIT") {
      base++;
      if(base == 4) score++,base--;
    }
    if(str == "HOMERUN") {
      score += base+1;
      base = 0;
    }

  }

  return 0;
}