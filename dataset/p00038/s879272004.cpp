#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int card[5];
  while(scanf("%d,%d,%d,%d,%d", 
	      &card[0], &card[1], &card[2], &card[3], &card[4]) != EOF) {
    sort(&card[0], &card[4] + 1);

    int data1[5];
    int kumi = -1;
    int before = 0;
    int count = 1;

    for(int i = 0; i < 5; i++) {
      if(card[i] != before) {
	data1[++kumi] = 1;
      } else {
	data1[kumi]++;
      }
      before = card[i];
    }
    kumi++;
    if(kumi == 2) {
      if(data1[0] == 4 || data1[1] == 4) {
	cout << "four card" << endl;
      } else if(data1[0] == 3 || data1[1] == 3) {
	cout << "full house" << endl;
      }
    }
    if(kumi == 3) {
      if(data1[0] == 3 || data1[1] == 3 || data1[2] == 3) {
	cout << "three card" << endl;
      } else if(data1[0] == 1 || data1[1] == 1 || data1[2] == 1) {
	cout << "two pair" << endl;
      }
    }
    if(kumi == 4) {
      cout << "one pair" << endl;
    }
    if(kumi == 5) {
      bool flag = false;
      for(int i = 0; i+1 < 5; i++) {
	if(card[i+1] - card[i] != 1) {
	  break;
	}
	if((i+1)+1 == 5) flag = true;
      }
      if(card[0] == 1 && card[1] == 10 &&
	 card[2] == 11 && card[3] == 12 && card[4] == 13) flag = true;

      if(flag) {
	cout << "straight" << endl;
      } else {
	cout << "null" << endl;
      }
    }
  }
  return 0;
}