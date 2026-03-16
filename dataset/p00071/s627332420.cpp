#include<cstdio>
int main(){
    int n;
    scanf("%d",&n);
    for(int ix=0;ix<n;ix++){
        char ar[8][10];
        for(int i=0;i<8;i++){
            scanf("%s\n",ar[i]);
        }
        int x,y;
        scanf("%d\n%d\n\n",&x,&y);
        x--;y--;
        ar[y][x]='m';
        for(;;){
            bool ism=false;
            for(int i=0;i<8;i++){
                for(int j=0;j<8;j++){
                    if(ar[i][j]=='m'){
                        ar[i][j]='0';
                        for(int k=1;k<=3&&i+k<8;k++)if(ar[i+k][j]=='1')ar[i+k][j]='m';
                        for(int k=-1;k>=-3&&j+k>=0;k--)if(ar[i+k][j]=='1')ar[i+k][j]='m';
                        for(int k=1;k<=3&&j+k<8;k++)if(ar[i][j+k]=='1')ar[i][j+k]='m';
                        for(int k=-1;k>=-3&&j+k>=0;k--)if(ar[i][j+k]=='1')ar[i][j+k]='m';
                        ism=true;
                    }
                }
            }
            if(!ism)break;
        }
        printf("Data %d:\n",ix+1);
        for(int i=0;i<8;i++){
            printf("%s\n",ar[i]);
        }
    }
}