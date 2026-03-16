#include <iostream>
#include <cstring>

using namespace std;

void bomb(int map[14][14], int x, int y){ 
        map[x][y] = 0;
        for(int i = -3; i <= 3; i++){
                if(map[x+i][y]){
                        bomb(map, x+i, y); 
                }   
                if(map[x][y+i]){
                        bomb(map, x, y+i);
                }   
        }   
}
int main(){
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++){
                int map[14][14];
                memset(map,0,sizeof(map));
                int in; 
                for(int j = 3; j <= 10; j++){
                        cin >> in; 
                        for(int k = 10; k >2; k--){
                                map[j][k] = in%10;
                                in /= 10; 
                        }   
                }   
                int x,y;
                cin >> x >> y;
                bomb(map,y+2,x+2);
                cout << "Data " << i << ":" << endl;
                for(int j = 3; j <= 10; j++){
                        for(int k = 3; k <= 10; k++){
                                cout << map[j][k];
                        }   
                        cout << endl;
                }   
        }   
}