#include<iostream>
using namespace std;
int data[102][102];

void DFS(int x,int y,int gx,int gy,bool &Flag,int color){
  if((data[y][x]!=color)||(Flag==true))
    return;
  if((x==gx)&&(y==gy)){
    Flag=true;
    return;
  }
  data[y][x]=0;
  DFS(x,y+1,gx,gy,Flag,color);
  DFS(x,y-1,gx,gy,Flag,color);
  DFS(x+1,y,gx,gy,Flag,color);
  DFS(x-1,y,gx,gy,Flag,color);
}


int main(){
  int w,h;
  int sx,sy;
  int gx,gy;
  while(1){
    cin>>w>>h;
    if(!w&&!h)
      break;
    for(int i=0;i<102;i++){
      for(int j=0;j<102;j++){
        data[i][j]=0;
      }
    }
    cin>>sx>>sy;
    cin>>gx>>gy;
    int n;
    cin>>n;
    int c,d,x,y;
    for(int i=0;i<n;i++){
      cin>>c>>d>>x>>y;
      if(d){
        for(int j=0;j<4;j++){
          for(int z=0;z<2;z++){
            data[j+y][z+x]=c;
          }
        }
      }else if(!d){
        for(int j=0;j<2;j++){
          for(int z=0;z<4;z++){
            data[j+y][z+x]=c;
          }
        }
      }
      /*
      for(int j=0;j<h+1;j++){
        for(int z=0;z<w+1;z++){
          cout<<data[j][z];
        }
        cout<<endl;
      }*/
    }
    bool Flag=false;
    int color=data[sy][sx];
    if(color!=0)
      DFS(sx,sy,gx,gy,Flag,color);
    if (Flag){
      cout<<"OK"<<endl;
    }else if(!Flag){
      cout<<"NG"<<endl;
    }
  }
  return 0;

}

