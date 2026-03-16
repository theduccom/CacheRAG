#include<cstdio>
int p[10][10];
void drop(int x,int y){
    if(0<=x && x<10 && 0<=y && y<10) p[x][y]++;
}
int main(){
    int x,y,s;
    int a=0,b=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            p[i][j]=0;
        }
    }
    while(~scanf("%d,%d,%d",&x,&y,&s)){
        if(s==1){
            drop(x,y);
            drop(x+1,y);
            drop(x-1,y);
            drop(x,y+1);
            drop(x,y-1);
        }else if(s==2){
            drop(x,y);
            drop(x+1,y);
            drop(x-1,y);
            drop(x,y+1);
            drop(x,y-1);
            drop(x+1,y+1);
            drop(x+1,y-1);
            drop(x-1,y+1);
            drop(x-1,y-1);
        }else if(s==3){
            drop(x,y);
            drop(x+1,y);
            drop(x-1,y);
            drop(x,y+1);
            drop(x,y-1);
            drop(x+1,y+1);
            drop(x+1,y-1);
            drop(x-1,y+1);
            drop(x-1,y-1);
            drop(x+2,y);
            drop(x-2,y);
            drop(x,y+2);
            drop(x,y-2);
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(p[i][j]==0) a++;
            else if(b<p[i][j]) b=p[i][j];
        }
    }
    printf("%d\n%d\n",a,b);
}