#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int ma[10][10];
    int x,y,d;
    char c;
    memset(ma,0,sizeof(ma));
    while(cin>>x>>c>>y>>c>>d){
//    for(int i=0;i<6;i++){
//        
//        cin>>x>>c>>y>>c>>d;
    
        ma[y][x]++;
        if(d==1){
            if(x>0){
                ma[y][x-1]++;
            }
            if(x<9){
                ma[y][x+1]++;
            }
            if(y>0){
                ma[y-1][x]++;
            }
            if(y<9){
                ma[y+1][x]++;
            }
        }
        else if(d==2){
            if(x>0){
                ma[y][x-1]++;
            }
            if(x<9){
                ma[y][x+1]++;
            }
            if(y>0){
                ma[y-1][x]++;
            }
            if(y<9){
                ma[y+1][x]++;
            }
            if(x>0&&y<9){
                ma[y+1][x-1]++;
            }
            if(x<9&&y>0){
                ma[y-1][x+1]++;
            }
            if(x>0&&y>0){
                ma[y-1][x-1]++;
            }
            if(x<9&&y<9){
                ma[y+1][x+1]++;
            }
        }
        else{
            if(x>0){
                ma[y][x-1]++;
            }
            if(x<9){
                ma[y][x+1]++;
            }
            if(y>0){
                ma[y-1][x]++;
            }
            if(y<9){
                ma[y+1][x]++;
            }
            if(x>0&&y<9){
                ma[y+1][x-1]++;
            }
            if(x<9&&y>0){
                ma[y-1][x+1]++;
            }
            if(x>0&&y>0){
                ma[y-1][x-1]++;
            }
            if(x<9&&y<9){
                ma[y+1][x+1]++;
            }
            if(x>1){
                ma[y][x-2]++;
            }
            if(x<8){
                ma[y][x+2]++;
            }
            if(y>1){
                ma[y-2][x]++;
            }
            if(y<8){
                ma[y+2][x]++;
            }
        }
    }
    int em=0,m=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(ma[i][j]==0)em++;
            m=max(m,ma[i][j]);
        }
    }
    cout<<em<<endl<<m<<endl;
    return 0;
}