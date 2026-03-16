#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;

int main(){
    char boa[8][8];
    while(1){
        
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(!(cin>>boa[i][j]))
                    return 0;
            }
        }
        int bo[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                bo[i][j]=boa[i][j]-'0';
            }
        }
            
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(bo[i][j]==1){
                    if(i<7&&j<7){
                        if(bo[i+1][j]==1&&bo[i][j+1]==1&&bo[i+1][j+1]){
                            cout<<"A"<<endl;
                            goto next;
                        }
                    }
                    if(j<5){
                        if(bo[i][j+1]&&bo[i][j+2]&&bo[j+3]){
                            cout<<"C"<<endl;goto next;
                        }
                            
                    }
                    if(i<5){
                        if(bo[i+1][j]&&bo[i+2][j]&&bo[i+3][j]){
                            cout<<"B"<<endl;goto next;
                        }
                        
                    }
                    if(i<7&&i>0&&j<7){
                        if(bo[i+1][j]&&bo[i][j+1]&&bo[i-1][j+1]){
                            cout<<"D"<<endl;goto next;
                        }
                    }
                    if(i<7&&j<6){
                        if(bo[i][j+1]&&bo[i+1][j+1]&&bo[i+1][j+2]){
                            cout<<"E"<<endl;goto next;
                        }
                    }
                    if(i<6&&j<7){
                        if(bo[i+1][j]&&bo[i+1][j+1]&&bo[i+2][j+1]){
                            cout<<"F"<<endl;goto next;
                        }
                    }
                    if(i<7&&j>0&&j<7){
                        if(bo[i+1][j]&&bo[i+1][j-1]&&bo[i][j+1]){
                            cout<<"G"<<endl;goto next;
                        }
                    }
                    
                }
            }
        }
        
    next:;
    }
    
    return 0;
}