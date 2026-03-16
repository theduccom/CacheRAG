#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int n;
string event;

int main() {
  cin >> n;

  for (int i=0; i<n; i++) {
    // puts("hello");

    int out_count = 0;
    bool first_base = false;
    bool second_base = false;
    bool third_base = false;
    int score = 0;

    while(cin >> event) {
      // cout << "score:" << score << endl;
      // cout << "out:" << out_count << endl;
      // cout << event << endl;
      
      if (event == "HIT") {
	if (third_base) {
	  third_base = false;
	  score++;
	}
	if (second_base) {
	  second_base = false;
	  third_base = true;
	}
	if (first_base) {
	  first_base = false;
	  second_base = true;
	}
	first_base = true;
      } else if (event == "HOMERUN") {
	if (third_base) {
	  score++;
	  third_base = false;
	}
	if (second_base) {
	  score++;
	  second_base = false;
	}
	if (first_base) {
	  score++;
	  first_base = false;
	}
	score++;
      } else if (event == "OUT") {
	out_count++;
	if (out_count >= 3) {
	  break;
	}
      }
    }
    
    printf("%d\n", score);
  }
}