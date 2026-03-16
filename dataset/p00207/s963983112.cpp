#include<iostream>
using namespace std;

int Array[200][200];
#define START 20

void DFS(int h,int w,int c){

    if(Array[h][w] != c || Array[h][w] == 0 || Array[h][w] == 6){
      return;
    }

    int tmp=Array[h][w];

    Array[h][w] = 6;

    DFS(h-1,w,tmp);
    DFS(h,w+1,tmp);
    DFS(h+1,w,tmp);
    DFS(h,w-1,tmp);


}

int main(){

    while(1){
      int H,W;
      int Start[2],Goal[2];
      int BlockNum;
      int color,dir,xpos,ypos;


      for(int i=0;i<200;i++){
        for(int j=0;j<200;j++){
          Array[i][j] = 0;
        }
      }

      cin >> H >> W;

      if(H == 0 && W == 0){
        break;
      }

      cin >> Start[0] >> Start[1];

      cin >> Goal[0] >> Goal[1];

      cin >> BlockNum;

      for(int i=0;i<BlockNum;i++){
        cin >> color >> dir >> xpos >> ypos;
        for(int i=0;i<4;i++){
          for(int j=0;j<2;j++){
            if(!dir){//?¨?
              Array[xpos+i][ypos+j] = color;
            }
            else{
              Array[xpos+j][ypos+i] = color;
            }
          }
        }
      }

      /*for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
          cout << Array[i][j];
        }
        cout << endl;
      }*/
      if(Array[Start[0]][Start[1]] != 0){
        DFS(Start[0],Start[1],Array[Start[0]][Start[1]]);
      }
      if(Array[Goal[0]][Goal[1]] == 6){
        cout << "OK" << endl;
      }
      else{
        cout << "NG" << endl;
      }

  }
    return 0;
}