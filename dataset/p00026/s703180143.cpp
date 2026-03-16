#include<iostream>
using namespace std;
int main(){
  int paper[10][10],x,y,size,i,j;
  string s;
  for(i=0; i<10; i++)
    for(j=0; j<10; j++)
      paper[i][j]=0;

  while(cin>>s){
    x=s.at(0)-'0';
    y=s.at(2)-'0';
    size=s.at(4)-'0';
      paper[x][y]++;
      if(x>0) paper[x-1][y]++;
      if(x<9) paper[x+1][y]++;
      if(y>0) paper[x][y-1]++;
      if(y<9) paper[x][y+1]++;

    if(size>=2){
      if(x>0&&y>0) paper[x-1][y-1]++;
      if(x<9&&y>0) paper[x+1][y-1]++;
      if(x>0&&y<9) paper[x-1][y+1]++;
      if(x<9&&y<9) paper[x+1][y+1]++;
    }
    if(size>=3){
      if(x>1)paper[x-2][y]++;
      if(y>1)paper[x][y-2]++;
      if(x<8)paper[x+2][y]++;
      if(y<8)paper[x][y+2]++;
    }
  }

  int n=0,max=0;
  for(i=0; i<10; i++){
    for(j=0; j<10; j++){
      if(paper[i][j]==0)n++;
      if(paper[i][j]>max)max=paper[i][j];
    }
  }
  cout<<n<<"\n"<<max<<endl;
}