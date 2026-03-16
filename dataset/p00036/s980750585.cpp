#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    while(1){
        string karifie[8];
        int fie[8][8];
        for(int i=0;i<8;i++){
            if(!(cin>>karifie[i]))goto exit;
        }
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++)fie[i][j]=karifie[i][j]-'0';
        }
        char ans;
        for(int i=0;i<7;i++){
            for(int j=0;j<7;j++)if(fie[i][j]&fie[i+1][j]&fie[i][j+1]&fie[i+1][j+1])ans='A';
        }
        for(int i=0;i<5;i++){
            for(int j=0;j<8;j++)if(fie[i][j]&fie[i+1][j]&fie[i+2][j]&fie[i+3][j])ans='B';
        }
        for(int i=0;i<8;i++){
            for(int j=0;j<5;j++)if(fie[i][j]&fie[i][j+1]&fie[i][j+2]&fie[i][j+3])ans='C';
        }
        for(int i=0;i<6;i++){
            for(int j=0;j<7;j++)if(fie[i+2][j]&fie[i+1][j]&fie[i][j+1]&fie[i+1][j+1])ans='D';
        }
        for(int i=0;i<7;i++){
            for(int j=0;j<6;j++)if(fie[i][j]&fie[i+1][j+2]&fie[i][j+1]&fie[i+1][j+1])ans='E';
        }
        for(int i=0;i<6;i++){
            for(int j=0;j<7;j++)if(fie[i][j]&fie[i+1][j]&fie[i+2][j+1]&fie[i+1][j+1])ans='F';
        }
        for(int i=0;i<7;i++){
            for(int j=0;j<6;j++)if(fie[i][j+2]&fie[i+1][j]&fie[i][j+1]&fie[i+1][j+1])ans='G';
        }
        cout<<ans<<endl;
    }
exit:
    return 0;
}