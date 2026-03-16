#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    char c[1000];
    int now=0;
    for(int i=0;i<1000;i++)c[i]='\0';
    cin.getline(c,1000);
    for(int i=0;c[i]!='\0';i++){
        if(c[i]=='p'&&c[i+1]=='e'&&c[i+2]=='a'&&c[i+3]=='c'&&c[i+4]=='h'){
            c[i]='a';
            c[i+1]='p';
            c[i+2]='p';
            c[i+3]='l';
            c[i+4]='e';
        }
        else if(c[i]=='a'&&c[i+1]=='p'&&c[i+2]=='p'&&c[i+3]=='l'&&c[i+4]=='e'){
            c[i]='p';
            c[i+1]='e';
            c[i+2]='a';
            c[i+3]='c';
            c[i+4]='h';
        }
        printf("%c",c[i]);
    }
    printf("\n");
}