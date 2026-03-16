#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
    char b[8][8];
    int a[8][8];
    char en;
int main(void){
 
 
 
    while(cin>>b[0]){
        cin>>b[1]>>b[2]>>b[3]>>b[4]>>b[5]>>b[6]>>b[7];
 
 
    for(int n=0;n<8;n++){
        for(int m=0;m<8;m++){
            if(b[n][m]=='1')a[n][m]=1;
            else a[n][m]=0;
        }
    }
    int i,j;
    int flag=0;
    char t;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(a[i][j]==1){
             //   cout<<i<<j;
                flag=1;
                break;
            }
        }
        if(flag==1)break;
    }
    if(a[i][j]==a[i][j+1]){
        //cout<<".";
        if(a[i][j+1]==a[i][j+2])t='C';
        else if(a[i][j+1]==a[i+1][j]){
            if(a[i+1][j]==a[i+1][j+1])t='A';
            else if(a[i+1][j]==a[i+1][j-1])t='G';
        }
        else if(a[i][j+1]==a[i+1][j+2])t='E';
    }
    else if(a[i][j]==a[i+1][j]){
        if(a[i+1][j]==a[i+2][j])t='B';
        else if(a[i+1][j]==a[i+1][j+1])t='F';
        else if(a[i+1][j]==a[i+1][j-1])t='D';
    }
    //else cout<<".....";
 
    cout<<t<<endl;
 
 
    }
 
    return 0;
}