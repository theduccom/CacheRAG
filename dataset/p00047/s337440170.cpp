#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
    int a,b;
    char cup[4],abc[2][3]={{'A','B','C'},{'1','0','0'}};
    while(scanf("%s",cup)!=EOF){
        for(int i=0;i<3;i++){
            if(abc[0][i]==cup[0]) a=i;
            if(abc[0][i]==cup[2]) b=i;
        }
        swap(abc[1][a],abc[1][b]);
    }
    for(int i=0;i<3;i++){
        if(abc[1][i]=='1'){
            printf("%c\n",abc[0][i]);
        }
    }
    return 0;
}