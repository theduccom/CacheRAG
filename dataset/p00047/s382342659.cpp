#include<iostream>

using namespace std;

int main(){
  int cup[3] = {1, 0, 0};
  int i = 0;
  int tmp = 0;
  char x, comma, y;

  while(1){

    if(i > 50)
      break;

    cin >> x >> comma >> y;
   
    if(x == '0')
      break;

    tmp = cup[x- 'A'];
    cup[x - 'A'] = cup[y - 'A'];
    cup[y - 'A'] = tmp;

    i++;
  }

  for(i=0; i<3; i++){
    if(cup[i] == 1)
      cout << char('A'+i) << endl;
  }
}

