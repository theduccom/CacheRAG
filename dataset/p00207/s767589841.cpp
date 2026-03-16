#include<iostream>
#include<vector>
#include<string>
using namespace std;

int w,h;
int xs,ys;
int xg,yg;
int n;
vector<int> c(200);
vector<int> d(200);
vector<int> x(200);
vector<int> y(200);
vector<vector<bool>> visited(200,vector<bool>(200,0));
vector<vector<int>> maze(200,vector<int>(200,0));

void dfs(int x,int y){

    if(visited[x][y]) return ;
    if(maze[xs][ys]!=maze[x][y]) return ;
 
    visited[x][y]=true;

    if(x<w) dfs(x+1,y);
    if(x>1) dfs(x-1,y);
    if(y<h)dfs(x,y+1);
    if(y>1)dfs(x,y-1);

}

int main(){
    while(true){
        cin>>w>>h;
        if(w==0&&h==0) break;
        cin>>xs>>ys;
        cin>>xg>>yg;
        cin>>n;
        
        c=vector<int>(200,0);
        d=vector<int>(200,0);
        x=vector<int>(200,0);
        y=vector<int>(200,0);
        visited=vector<vector<bool>>(200,vector<bool>(200,0));
       
        for(int i=0;i<n;i++){
            cin>>c[i]>>d[i]>>x[i]>>y[i];
            if(d[i]){
                for(int j=0;j<4;j++)
                for(int k=0;k<2;k++)
                maze[x[i]+k][y[i]+j]=c[i];
            }else{
                for(int j=0;j<2;j++)
                for(int k=0;k<4;k++)
                maze[x[i]+k][y[i]+j]=c[i];
            }
        }
        dfs(xs,ys);
        if(visited[xg][yg]&&maze[xs][ys]) cout<<"OK"<<endl;
        else cout<<"NG"<<endl;
        
    }

    return 0;
}
