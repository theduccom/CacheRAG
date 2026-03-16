#include<stdio.h>
int field[8][8]={0};
char sf[8][8]={0};
int x,y;
int dx[12]={0,0,0,0,0,0,-3,-2,-1,1,2,3};
int dy[12]={-3,-2,-1,1,2,3,0,0,0,0,0,0};

int chain(int x,int y){
    field[x][y]=0;
    for(int i=0;i<12;i++){
        if(field[x-dx[i]][y-dy[i]]==1&&0<=x-dx[i]&&x-dx[i]<=7&&0<=y-dy[i]&&y-dy[i]<=7){
            chain(x-dx[i],y-dy[i]);
        }
    }
    return 0;
}

int in(){
    for(int j=0;j<8;j++){
        scanf("%s",sf[j]);
    }
    return 0;
}

int che(){
    for(int j=0;j<8;j++){
        for(int k=0;k<8;k++){
            field[j][k]=sf[j][k]-'0';
        }
    }
    return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        in();
        che();
        scanf("%d%d",&y,&x);
        chain(x-1,y-1);
        printf("Data %d:\n",i+1);
        for(int j=0;j<8;j++){
            for(int k=0;k<8;k++){
                printf("%d",field[j][k]);
            }
            printf("\n");
        }
    }
    return 0;
}