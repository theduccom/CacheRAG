#include <iostream>
using namespace std;

char map[100][100];

int main(){
    int h, w;

    while(cin >> h >> w, h != 0 || w != 0){
        int x, y;
        bool loop = false;
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                cin >> map[j][i];
            }
        }
        x = 0;
        y = 0;
        for(int i=1; i<=10000; i++){
            if(map[x][y] == '!'){
                loop = true;
                break;
            }
            if(map[x][y] == '.'){
                break;
            }
            if(map[x][y] == '>'){
                map[x][y] = '!';
                x++;
            }
            else if(map[x][y] == '<'){
                map[x][y] = '!';
                x--;
            }
            else if(map[x][y] == 'v'){
                map[x][y] = '!';
                y++;
            }
            else if(map[x][y] == '^'){
                map[x][y] = '!';
                y--;
            }
        }
        if(loop) cout << "LOOP" << endl;
        else cout << x << " " << y << endl;
    }
    return 0;
}