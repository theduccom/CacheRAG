#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
    int i,ABO[4]={0,0,0,0};
    char abo[10];
    while(scanf("%s",abo)!=EOF){
        for(i=0;;i++){
            if(abo[i]==',') break;
        }
        if(abo[i+1]=='A'&&abo[i+2]=='B'){
            ABO[2]++;
            abo[i+1]='a';
            abo[i+2]='b';
        }
        else if(abo[i+1]=='A'){
            ABO[0]++;
        }
        else if(abo[i+1]=='B'){
            ABO[1]++;
        }
        else if(abo[i+1]=='O'){
            ABO[3]++;
        }
    }
    for(int i=0;i<4;i++){
        printf("%d\n",ABO[i]);
    }
    return 0;
}