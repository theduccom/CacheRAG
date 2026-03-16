#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#define INF 999999
using namespace std;
int main(){
    char W[1500]={0};
    int i;
    scanf("%[^\n]",W);
    for(i=0;i<strlen(W);i++){
        if(W[i]=='p'&&W[i+1]=='e'&&W[i+2]=='a'&&W[i+3]=='c'&&W[i+4]=='h'){W[i]='a';W[i+1]='p';W[i+2]='p';W[i+3]='l';W[i+4]='e';}
        else if(W[i]=='a'&&W[i+1]=='p'&&W[i+2]=='p'&&W[i+3]=='l'&&W[i+4]=='e'){W[i]='p';W[i+1]='e';W[i+2]='a';W[i+3]='c';W[i+4]='h';}
    }
    for(int j=0;j<i;j++){
        cout<<W[j];
    }
    puts("");
    return 0;
}