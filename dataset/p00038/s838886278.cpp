#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

  int in0, in1, in2, in3, in4;
  char in;

  while( cin >> in0 >> in >> in1 >> in >> in2 >> in >> in3 >> in >> in4 ) {

    vector< int > hand;

    hand.push_back( in0 );
    hand.push_back( in1 );
    hand.push_back( in2 );
    hand.push_back( in3 );
    hand.push_back( in4 );
    sort( hand.begin(), hand.end() );

    bool flag = false;
    if ( ( hand[1] == hand[2] && hand[2] == hand[3] ) && ( hand[2] == hand[0] || hand[2] == hand[4] ) ) {
      cout << "four card" << endl;
      continue;
    }
    if ( ( hand[0] == hand[1] && hand[3] == hand[4] ) && ( hand[2] == hand[0] || hand[2] == hand[4] ) ) {
      cout << "full house" << endl;
      continue;
    }
    for ( int i = 0; i < 4; i++ ) {
      if ( hand[3-i] != hand[4] - i - 1 ) break;
      if ( i == 3 ) {
	cout << "straight" << endl;
	flag = true;
	break;
      }
    }
    if ( flag ) continue;
    if ( hand[0] == 1 && hand[1] == 10 && hand[2] == 11 && hand[3] == 12 && hand[4] == 13 ) {
      cout << "straight" << endl;
      continue;
    }
    for ( int i = 0; i < 3; i++ ) {
      if ( hand[i] == hand[i+1] && hand[i] == hand[i+2] ) {
	cout << "three card" << endl;
	flag = true;
	break;
      }
    }
    if ( flag ) continue;
    int c = 0;
    for ( int i = 0; i < 4; i++ ) {
      if ( hand[i] == hand[i+1] ) c++;
    }
    if ( c == 1 ) {
      cout << "one pair" << endl;
      continue;
    }else if ( c == 2 ) {
      cout << "two pair" << endl;
      continue;
    }else if ( c == 0 ) {
      cout << "null" << endl;
      continue;
    }
  }

  return 0;

}