#include<iostream>

using namespace std;

struct Cup{
  char cupname;
  int ball;
};

void init(Cup&, char, int);
void ChangeCup(char, char);
char SearchBall(void);

Cup data[3];

int main(){
  char change1, change2, z;

  init(data[0], 'A', 1);
  init(data[1], 'B', 0);
  init(data[2], 'C', 0);

  while(cin >> change1 >> z >> change2){
    ChangeCup(change1, change2);
  }
  cout << SearchBall() << endl;
  return 0;
}

void init(Cup& x, char name, int _ball){
  x.cupname = name;
  x.ball = _ball;
}

void ChangeCup(char x, char y){
  int i, n, m, copy;

  for(i=0; i<3; ++i){
    if(data[i].cupname == x)
      n = i;
    if(data[i].cupname == y)
      m = i;
  }

  copy = data[n].ball;
  data[n].ball = data[m].ball;
  data[m].ball = copy;
}

char SearchBall(void){
  for(int i=0; i<3; ++i){
    if(data[i].ball == 1)
      return data[i].cupname;
  }
}