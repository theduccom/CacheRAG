#include <iostream>

using namespace std;

int main(void){
    int list_x[7][3]={{1,0,1},{0,0,0},{1,2,3},{0,-1,-1},{1,1,2},{0,1,1},{1,0,-1}};
    int list_y[7][3]={{0,1,1},{1,2,3},{0,0,0},{1,1,2},{0,1,1},{1,1,2},{0,1,1}};
    int i,j;
    int k,l;
    int fig_i;
    char fig[8]={"ABCDEFG"};
    char s[8][9];
    bool judge;
    
    while(true){
        judge=false;
        for(i=0;i<8;i++){
            if(!(cin>>s[i]))return(0);
            cin.get();
        }
        for(i=0;i<8;i++){
            for(j=0;j<8;j++){
                if(s[i][j]=='1'){
                    for(k=0;k<7;k++){
                        judge=true;
                        for(l=0;l<3;l++){
                            if(s[i+list_y[k][l]][j+list_x[k][l]]!='1'){
                                judge=false;
                            }
                        }
                        if(judge){
                            fig_i=k;
                            break;
                        }
                    }
                }
                if(judge)break;
            }
            if(judge)break;
        }
        cout<<fig[fig_i]<<endl;
    }
}