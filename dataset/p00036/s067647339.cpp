#include<iostream>
#include<cstdio>
using namespace std;

bool map[8][8];

char Solve(int x,int y){

  if(x!=7 && map[y][x+1]==1 && y!=7 && map[y+1][x]==1 && map[y+1][x+1]==1)
    return 'A';

  else if(y<=4&&map[y+1][x]==1&&map[y+2][x]==1&&map[y+3][x]==1)
    return 'B';

  else if(x<=4&&map[y][x+1]==1&&map[y][x+2]==1&&map[y][x+3]==1)
    return 'C';

  else if(x>0&&y<=5&&map[y+1][x]==1&&map[y+1][x-1]==1&&map[y+2][x-1]==1)
    return 'D';

  else if(y<7&&x<=5&&map[y][x+1]==1&&map[y+1][x+1]==1&&map[y+1][x+2]==1)
    return 'E';

  else if(x<7&&y<=5&&map[y+1][x]==1&&map[y+1][x+1]==1&&map[y+2][x+1]==1)
    return 'F';

  else
    return 'G';

}

int main(){

  char c;

  while(cin>>c){

    map[0][0]=c-'0';

    for(int i=1; i<8; i++){cin>>c;map[0][i]=c-'0';}
    for(int i=1; i<8; i++)for(int j=0; j<8; j++){cin>>c;map[i][j]=c-'0';}

    int i,j;
    for(i=0; i<8; i++){
      for(j=0; j<8; j++){
        if(map[i][j]==true)goto BREAK;
      }
    }
    BREAK:;

  //  for(int m=0;m<8;m++){for(int n=0;n<8;n++)cout<<map[m][n];cout<<endl;}

    cout << Solve(j,i) << endl;

  //  getchar();

  }


  return 0;

}