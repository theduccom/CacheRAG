#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
    char field[65];
    char a[7][26]={
        "1100000011",
        "1000000010000000100000001",
        "1111",
        "1000000110000001",
        "11000000011",
        "100000001100000001",
        "110000011"
    };
    while(cin>>field){
        for(int i=1;i<8;i++)scanf("%s",field+i*8);
        char *pnt;
        pnt=strchr(field,'1');
        for(int i=0;i<7;i++){
            if(!strncmp(pnt,a[i],strlen(a[i]))){
                char x='A'+i;
                cout<<x<<endl;
                break;
            }
        }
    }
    return 0;
}