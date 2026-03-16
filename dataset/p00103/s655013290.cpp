#include <iostream>
using namespace std;
void inning() {
  int out = 0, runner = 0, score = 0;
  string ev;
  while(out < 3) {
	cin >> ev;
	if(ev == "OUT") {
	  out++;
	  if(out == 3) break;
	}
	else if(ev == "HOMERUN") {
	  score += runner + 1;
	  runner = 0;
	}
	else if(ev == "HIT") {// hit
	  if(runner == 3) score++;
	  else runner++;
	}
  }
  cout << score << endl;
}
int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; ++i) {
	inning();
  }
  return 0;
}