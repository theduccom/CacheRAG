#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

  int card[5];
  char ten;

  while( cin >> card[0] ){
    cin >> ten >> card[1] >> ten >> card[2] >> ten >> card[3] >> ten >> card[4];

    sort( card , card + 5 );

    if( card[4] == card[1] || card[3] == card[0] ){// four card
      cout << "four card" << endl;
      goto end;
    }

    if( (card[0] == card[2] && card[3] == card[4]) || (card[0] == card[1] && card[2] == card[4] ) ){
      cout << "full house" << endl;
      goto end;
    }

    int cnt;
    int r;
    cnt = 0;
    r = card[0];
    for( int i = 1 ; i < 5 ; i++ ){// straight
      if( r + 1 == card[i] ){
	cnt++;
	r = card[i];
      }
      else r = card[i];
    }
    if( cnt == 4 ){
      cout << "straight" << endl;
      goto end;
    }
    else if( card[0] == 1  && card[1] == 10 && card[2] == 11 && card[3] == 12 && card[4] == 13 ){
      cout << "straight" << endl;
      goto end;
    }

    if( card[0] == card[2] || card[1] == card[3] || card[2] == card[4] ){// three card
      cout << "three card" << endl;
      goto end;
    }

    if( card[0] == card[1] && card[2] == card[3] ){// two pair
      cout << "two pair" << endl;
      goto end;
    }
    else if( card[0] == card[1] && card[3] == card[4] ){
      cout << "two pair" << endl;
      goto end;
    }
    else if( card[1] == card[2] && card[3] == card[4] ){
      cout << "two pair" << endl;
      goto end;
    }

    for( int i = 0 ; i < 4 ; i++ ){// two card
      if( card[i] == card[i+1] ){
	cout << "one pair" << endl;
	goto end;
      }
     }

      cout << "null" << endl;

  end:;
  }
  return 0;
}