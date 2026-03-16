#include<iostream>
#include<queue>
#include<vector>
#include<stdio.h>

using namespace std;

int checker[8][8][8][8][8][8][8];

struct Puzzle{

  short p[2][4];
  short lastorder;//1 ???  3?????? 5 ??????
  short ordernum;
/*
  Puzzle(){
    /*p = new short*[2];
    for(int i=0; i<2; i++){
      p[i] = new short[4];
    }
    this->lastorder = 8;
    this->ordernum = 0;
  }

  /*Puzzle(const Puzzle& puzzle){
    p = new short*[2];
    for(int i=0; i<2; i++){
      p[i] = new short[4];
    }
    for(int i=0;i<2;i++){
      for(int j=0;j<4;j++){
        p[i][j] = puzzle.p[i][j];
      }
    }
    this->lastorder = puzzle.lastorder;
    this->ordernum = puzzle.ordernum;
  }

  ~Puzzle(){
    /*for(int i=0; i<2; i++){
      delete[] p[i];
    }
    delete[] p;
  }

  /*inline bool check(){
    return(checker[p[0][0]][p[0][1]][p[0][2]][p[0][3]][p[1][0]][p[1][1]][p[1][2]]);
  }

  inline void throughpuzzle(){
    checker[p[0][0]][p[0][1]][p[0][2]][p[0][3]][p[1][0]][p[1][1]][p[1][2]] = false;
  }*/

};




int main(){





    queue<Puzzle> q;



    for(int a=0;a<8;a++){
      for(int b=0;b<8;b++){
        for(int c=0;c<8;c++){
          for(int d=0;d<8;d++){
            for(int e=0;e<8;e++){
              for(int f=0;f<8;f++){
                for(int g=0;g<8;g++){
                  checker[a][b][c][d][e][f][g] = -1;
                }
              }
            }
          }
        }
      }
    }

    checker[0][1][2][3][4][5][6] = 0;

    Puzzle Start;

    for(int i=0;i<2;i++){
      for(int j=0;j<4;j++){
        Start.p[i][j] = i*4 + j;
      }
    }

    Start.lastorder = 8;
    Start.ordernum = 0;

    q.push(Start);

    while(!q.empty()){

      Puzzle tmp;
      tmp = q.front();

      q.pop();

      short x,y;

      for(short i=0;i < 2; i++){
        for(short j=0;j < 4; j++){
          if(tmp.p[i][j] == 0){
            x = j;
            y = i;
          }
        }
      }

      tmp.ordernum++;

      short Beforeorder = tmp.lastorder;

      Puzzle puzzle = tmp;
      short t;

      if(x != 3 && Beforeorder != 3){

        swap(puzzle.p[y][x],puzzle.p[y][x+1]);


        if((checker[puzzle.p[0][0]][puzzle.p[0][1]][puzzle.p[0][2]][puzzle.p[0][3]][puzzle.p[1][0]][puzzle.p[1][1]][puzzle.p[1][2]]) == -1){
          puzzle.lastorder = 1;
          q.push(puzzle);
          checker[puzzle.p[0][0]][puzzle.p[0][1]][puzzle.p[0][2]][puzzle.p[0][3]][puzzle.p[1][0]][puzzle.p[1][1]][puzzle.p[1][2]] = tmp.ordernum;
        }
        swap(puzzle.p[y][x],puzzle.p[y][x+1]);
      }

      if(x != 0 && Beforeorder != 1){
        swap(puzzle.p[y][x],puzzle.p[y][x-1]);

        if((checker[puzzle.p[0][0]][puzzle.p[0][1]][puzzle.p[0][2]][puzzle.p[0][3]][puzzle.p[1][0]][puzzle.p[1][1]][puzzle.p[1][2]]) == -1){
          puzzle.lastorder = 3;
          q.push(puzzle);
          checker[puzzle.p[0][0]][puzzle.p[0][1]][puzzle.p[0][2]][puzzle.p[0][3]][puzzle.p[1][0]][puzzle.p[1][1]][puzzle.p[1][2]] = tmp.ordernum;
        }
        swap(puzzle.p[y][x],puzzle.p[y][x-1]);
        //puzzle = tmp;
      }

      if(Beforeorder !=  5){
        swap(puzzle.p[0][x],puzzle.p[1][x]);

        if((checker[puzzle.p[0][0]][puzzle.p[0][1]][puzzle.p[0][2]][puzzle.p[0][3]][puzzle.p[1][0]][puzzle.p[1][1]][puzzle.p[1][2]]) == -1){
          puzzle.lastorder = 5;
          checker[puzzle.p[0][0]][puzzle.p[0][1]][puzzle.p[0][2]][puzzle.p[0][3]][puzzle.p[1][0]][puzzle.p[1][1]][puzzle.p[1][2]] = tmp.ordernum;
          q.push(puzzle);
        }
      }

    }

    short answer[8];

    while(1){
      cin >> answer[0];
      if(cin.eof())
        break;
      for(int i=1;i<8;i++){
        cin >> answer[i];
      }
      cout << checker[answer[0]][answer[1]][answer[2]][answer[3]][answer[4]][answer[5]][answer[6]] << endl;;

    }




      return 0;
}