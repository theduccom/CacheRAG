#include<iostream>
using namespace std;
#define UUI long long int
UUI x,y,n,m;
char tile[120][120],a;
int main(){
    while(1){
            cin >> n >> m;
            if(n==0&&m==0)break;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a;
            tile[i][j]=a;
        }
    }
    x=0;
    y=0;
    while(1){
            if(tile[y][x]==0){
                    cout << "LOOP" << endl;
                    break;
            }
    if(tile[y][x]=='>'){
        tile[y][x]=0;
        x=x+1;
    }else if(tile[y][x]=='<'){
        tile[y][x]=0;
        x=x-1;
    }else if(tile[y][x]=='^'){
        tile[y][x]=0;
        y=y-1;
    }else if(tile[y][x]=='v'){
        tile[y][x]=0;
        y=y+1;
    }else if(tile[y][x]=='.'){
            cout << x <<" "<< y << endl;
        break;
    }
    }
    }
return 0;
}