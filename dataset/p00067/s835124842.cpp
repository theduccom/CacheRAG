#include <iostream>

using namespace std;

char c[14][14];

void clearing(int x, int y){ 
        int dx[] = {1,0,-1,0};
        int dy[] = {0,1,0,-1};
        c[x][y] = 0;
        for(int i = 0; i < 4; i++){
                if(c[x+dx[i]][y+dy[i]]) clearing(x+dx[i],y+dy[i]);
        }   
}

int main(){
        //for(int i = 0; i < 14; i++)for(int j = 0; j < 14; j++)c[i][j] = 0;
        while(cin >> c[1][1]){
                c[1][1] -= '0';
                for(int i = 1; i < 13; i++){
                        for(int j = 1; j < 13; j++){
                                if(i-1 || j-1){
                                        cin >> c[i][j];
                                        c[i][j] -= '0';
                                }   
                        }   
                }   
                int s = 0;
                for(int i = 1; i < 13; i++){
                        for(int j = 1; j < 13; j++){
                                if(c[i][j]){
                                        s++;
                                        clearing(i,j);
                                }   
                        }   
                }   
                cout << s << endl;
        }   
}