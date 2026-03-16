#include<cstdio>
using namespace std;
char map[8][8];
void solve(int y,int x);
int main(){
    int n;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        int s_x,s_y;
        for(int j=0;j<8;j++){
            scanf("%s",map[j]);
        }
        scanf("%d\n%d",&s_x,&s_y);
        printf("Data %d:\n",i+1);
        solve(s_y-1,s_x-1);

        for(int j=0;j<8;j++){
            for(int k=0;k<8;k++){
                printf("%c",map[j][k]);
            }
            puts("");
        }

    }
    return 0;
}


void solve(int y,int x){
    
    if(y<-1 || y>7)return;
    if(x<-1 || x>7)return;
    if(map[y][x]=='1'){

        map[y][x]='0';
        for(int i=-3;i<4;i++){
            if(i==0)continue;
            solve(y+i,x);
        }
        for(int i=-3;i<4;i++){
            if(i==0)continue;
            solve(y,x+i);
        }
    }
    return;
}