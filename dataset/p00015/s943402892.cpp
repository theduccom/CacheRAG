#include<cstdio>
#include<iostream>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char moneywrite[2][1000];
        int money[2][1000];
        int stl[2]={0,0};
        int stlstl;
        int sum[81];
        scanf("%s",moneywrite[0]);
        scanf("%s",moneywrite[1]);
        for(int j=0;moneywrite[0][j]!='\0';j++){
            money[0][j]=moneywrite[0][j]-'0';
            stl[0]++;
        }
        for(int j=0;moneywrite[1][j]!='\0';j++){
            money[1][j]=moneywrite[1][j]-'0';
            stl[1]++;
        }
        if(stl[0]>stl[1]){
            stlstl=stl[0];
            int p;
            p=stl[0]-stl[1];
            for(int j=0;j<stl[0];j++){
                money[1][stl[0]-j]=money[1][stl[0]-j-p];
            }
            for(int k=0;k<p;k++)
                money[1][k]=0;
        }
        else if(stl[1]>stl[0]){
            stlstl=stl[1];
            int p;
            p=stl[1]-stl[0];
            for(int j=0;j<stl[1];j++){
                money[0][stl[1]-j]=money[0][stl[1]-j-p];
            }
            for(int k=0;k<p;k++)
                money[0][k]=0;
        }
        else{
            stlstl=stl[1];
        }
/*
        for(int j=0;j<stlstl;j++)
            printf("[%d][%d]\n",money[0][j],money[1][j]);
*/
        if(81<=stlstl){
            printf("overflow");
            goto exit;
        }
        for(int j=stlstl-1;0<=j;j--){
            sum[j]=money[0][j]+money[1][j];
            if(10<=sum[j]){
                if(stlstl==80&&j==0){
                    printf("overflow");
                    goto exit;
                }
                else if(j==0){
                    printf("1");
                    sum[j]%=10;
                }
                else{
                    money[0][j-1]++;
                    sum[j]%=10;
                }
            }
        }
        for(int j=0;j<stlstl;j++)
            printf("%d",sum[j]);
exit:
        puts("");
    }
    return 0;
}