#include<bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  while( n-- ) {
    int score = 0, out = 0;
    int base[4] = {0};

    while(1) {      
      if( out == 3 ) {
	cout << score << endl;
	break;;
      }
      
      string event;
      cin >> event;
      if( event == "HIT" ) {
	if( base[3] ) {
	  score++;
	  base[3] = 0;
	}
	if( base[2] ) {
	  base[3] = 1;
	  base[2] = 0;
	}
	if( base[1] ) {
	  base[2] = 1;
	  base[1] = 0;
	}
	base[1] = 1;
      }
      
      else if( event == "HOMERUN" ) {
	score += base[3]+base[2]+base[1]+1;
	base[3] = base[2] = base[1] = 0;
      }
      
      else {
	out++;
      }
    }
  }
}