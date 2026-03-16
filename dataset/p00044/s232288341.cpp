#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int check[60000] = {0};

    int flg = 0;
    for(int i = 3;i <= 60000; i+=2){
        flg = 1;
        for(int j = 2;j*j <= i; j++){
            if(i%j == 0){
                flg = 0;
                break;
            }
        }
        if(flg == 1)check[i] = 1;
    }
    check[2] = 1;

    int n;
    while(scanf("%d",&n) != EOF){
        for(int i = n-1;i > 0;i--){
            if(check[i] == 1){
                printf("%d ",i);
                break;
            }
        }
        for(int i = n+1;i <= 60000;i++){
            if(check[i] == 1){
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}