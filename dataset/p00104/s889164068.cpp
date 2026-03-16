#include <iostream>
using namespace std;

    int main (){
        int h, w;
        int i, j;
        int x = 0, y = 0;
        char c[100][100];
        while(1){
            x = 0; y = 0;
            cin >> h >> w;
            if(h == 0 && w == 0){
                break;
            }
            for(i = 0; i < h; i++){
                for(j = 0; j < w; j++){
                    cin >> c[i][j];
                }
            }
            
            while(1){
                if(c[y][x] == '<'){
                    c[y][x] = 'r';
                    x--;
                }
                if(c[y][x] == '>'){
                    c[y][x] = 'r'; 
                    x++;
                    }
                if(c[y][x] == 'v'){
                    c[y][x] = 'r';
                    y++;
                    }
                if(c[y][x] == '^'){
                    c[y][x] = 'r';
                    y--;
                    }
                if(c[y][x] == '.'){
                    cout << x << " " << y << endl;
                    break;
                }
                if(c[y][x] == 'r'){
                    cout << "LOOP" << endl;
                    break;
                }
            }
        }

    return 0;    
    }