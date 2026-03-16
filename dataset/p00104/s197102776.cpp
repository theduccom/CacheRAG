#include <iostream>
using namespace std;

int h, w;
char t[110][110];

int main(){
  while(cin >> h >> w, h || w){
    for(int i = 0; i < h; i++){
      cin >> t[i];
    }

    int x = 0, y = 0;

    while(true){
      //ツ止ツづ慊づ?つスツづィ, ツδ?ツプツつオツつスツづィツつオツつスツづァツ終ツ猟ケ
      if(t[y][x] == '.' || t[y][x] == 'L'){
        break;
      }

      //ツパツネツδ仰づ個津環づィツづ可暗堋督ョツつキツづゥ
      int nx = x;
      int ny = y;

      switch(t[y][x]){
        case '^': ny--; break;
        case '>': nx++; break;
        case 'v': ny++; break;
        case '<': nx--; break;
      }

      //ツ辿ツづ?つスツづ?つアツづォツづ可づ? ツ暗ウツづーツづつつッツづ?つィツつ「ツづ? ツδ?ツプツつオツつスツつアツづ?つェツづュツつゥツづゥツづヲツつ、ツづ可つキツづゥ
      t[y][x] = 'L';
      x = nx;
      y = ny;
    }

    //ツ暗ェツ度ツ辿ツづ?つスツつアツづ?つ?づゥツ渉ーツづ?終ツ猟ケツつオツづ?つ「ツつスツづァツδ?ツプ
    if(t[y][x] == 'L'){
      cout << "LOOP\n";
    }
    //'.'ツづ?終ツづュツづ?づ?つ「ツつスツづァツ止ツづ慊づ?つス
    else{
      cout << x << " " << y << endl;
    }
  }
}