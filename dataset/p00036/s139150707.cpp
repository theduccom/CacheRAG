#include<string>
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    char a[10][10];
    int x = 0;

    while(scanf("%s",a[x])!=EOF){
        if(x == 7){
            getchar();
            for(int i = 0;i < 8; i++){
                for(int j = 0;j < 8; j++){
                    if(a[i][j] == '1'&& a[i+1][j] == '1' && a[i][j+1] == '1' && a[i+1][j+1] == '1')printf("A\n");
                    if(a[i][j] == '1'&& a[i+1][j] == '1' && a[i+2][j] == '1' && a[i+3][j] == '1')printf("B\n");
                    if(a[i][j] == '1'&& a[i][j+1] == '1' && a[i][j+2] == '1' && a[i][j+3] == '1')printf("C\n");
                    if(a[i][j] == '1'&& a[i][j+1] == '1' && a[i-1][j+1] == '1' && a[i+1][j] == '1')printf("D\n");
                    if(a[i][j] == '1'&& a[i][j+1] == '1' && a[i+1][j+1] == '1' && a[i+1][j+2] == '1')printf("E\n");
                    if(a[i][j] == '1'&& a[i+1][j] == '1' && a[i+1][j+1] == '1' && a[i+2][j+1] == '1')printf("F\n");
                    if(a[i][j] == '1'&& a[i][j+1] == '1' && a[i-1][j+1] == '1' && a[i-1][j+2] == '1')printf("G\n");
                }
            }
            x = 0;
        }
        else {
            x++;
        }
    }
    return 0;
}