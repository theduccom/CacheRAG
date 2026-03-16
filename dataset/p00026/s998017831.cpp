//Dropping Ink
#include<bits/stdc++.h>
using namespace std;

inline bool a(int y, int x){
  return (0<=x && x<=9 && 0<=y && y<=9);
}

int d1[4][2]={{-1,0},{1,0},{0,1},{0,-1}};
int d2[4][2]={{1,1},{1,-1},{-1,1},{-1,-1}};
int d3[4][2]={{-2,0},{2,0},{0,2},{0,-2}};
int p[10][10];

void drop1(int y, int x){
  p[y][x]++;
  for(int i=0; i<4; i++)
    if(a(y+d1[i][0], x+d1[i][1]))p[y+d1[i][0]][x+d1[i][1]]++;
}

void drop2(int y, int x){
  drop1(y, x);
  for(int i=0; i<4; i++)
    if(a(y+d2[i][0], x+d2[i][1]))p[y+d2[i][0]][x+d2[i][1]]++;
}

void drop3(int y, int x){
  drop2(y, x);
  for(int i=0; i<4; i++)
    if(a(y+d3[i][0], x+d3[i][1]))p[y+d3[i][0]][x+d3[i][1]]++;
}

int main(){
  int x, y, z;
  int max=0, n=0;

  while(scanf("%d,%d,%d", &x, &y, &z)!=EOF){
    if(z==1)drop1(y, x);
    else if(z==2)drop2(y, x);
    else if(z==3)drop3(y, x);
  }
  for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
      if(p[i][j]==0) n++;
      else if(max<p[i][j])max=p[i][j];
    }
  }
  cout << n << endl;
  cout << max << endl;

  return 0;
}