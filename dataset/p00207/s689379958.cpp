#include<iostream>
using namespace std;

int mass[102][102];
int gx,gy;
bool goal_flag;
void DFS(int x,int y,int c){
    if(mass[y][x]!=c || mass[y][x]==0)return;
    if(x==gx&&y==gy){goal_flag=true;return;}
    mass[y][x]=0;
    DFS(x+1,y,c);
    DFS(x-1,y,c);
    DFS(x,y+1,c);
    DFS(x,y-1,c);
}

int main(){
  int h,w;
  int start_x,start_y;

  int n;
  int c,d,x,y;
  while(1){
    cin>>w>>h;
    if(w==0&&h==0)break;
    cin>>start_x>>start_y;
    cin>>gx>>gy;
    cin>>n;
    for(int i=0;i<h+2;i++){
      for(int j=0;j<w+2;j++){
        mass[i][j]=0;
      }
    }

    for(int i=0;i<n;i++){
        cin>>c>>d>>x>>y;
        for(int j=0;j<2;j++){
          for(int k=0;k<4;k++){
            if(d==0){mass[y+j][x+k]=c;}
            else if(d==1){mass[y+k][x+j]=c;}
          }
        }
    }
    goal_flag=false;
    DFS(start_x,start_y,mass[start_y][start_x]);
    if(goal_flag)cout<<"OK";
    else cout<<"NG";
    cout<<endl;
  }
}

