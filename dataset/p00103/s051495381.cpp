#include <iostream>
using namespace std;

int main(void)
{
  int n;
  cin >> n;
  char c[8];
  int i = 0;
  int out = 0;
  int array[3] = {};
  int score = 0;

  while(i != n){
    cin >> c;
    if(c[0] == 'H' && c[1] == 'I' && c[2] == 'T'){
      if(array[2] == 1){
	score++;
      }
      array[2] = array[1];
      array[1] = array[0];
      array[0] = 1;
    }
    if(c[0] == 'H' && c[1] == 'O' && c[2] == 'M' && c[3] == 'E' && c[4] == 'R' && c[5] == 'U' && c[6] == 'N'){
      score = score + array[0] + array[1] + array[2] + 1;
      array[0] = 0;
      array[1] = 0;
      array[2] = 0;
    }
    
    if(c[0] == 'O' && c[1] == 'U' && c[2] == 'T'){
      out++;
    }
    if(out == 3){
      cout << score << endl;
      array[0] = 0;
      array[1] = 0;
      array[2] = 0;
      score = 0;
      out = 0;
      i++;
    }
  }
  return 0;
}