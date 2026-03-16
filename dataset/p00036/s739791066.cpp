#include <iostream>

using namespace std;

struct pt{
    int x, y;
};

int main()
{
    const pt figure[][3] = {{{ 1, 0}, { 0, 1}, { 1, 1}},
                            {{ 0, 1}, { 0, 2}, { 0, 3}},
                            {{ 1, 0}, { 2, 0}, { 3, 0}},
                            {{-1, 1}, { 0, 1}, {-1, 2}},
                            {{ 1, 0}, { 1, 1}, { 2, 1}},
                            {{ 0, 1}, { 1, 1}, { 1, 2}},
                            {{ 1, 0}, {-1, 1}, { 0, 1}},
    };
    char s[8][10];
    do{
        int i=0;
        for(i=0; i<8; i++) cin.getline(s[i], 10);
        int x=0, y=0;
        for(y=0; y<8; y++){
            for(x=0; x<8; x++){
                if(s[y][x]=='1') goto found;
            }
        }
        found:
        
        for(i=0; i<7; i++){
            bool match=true;
            for(int j=0; j<3; j++){
                int tx=x+figure[i][j].x;
                int ty=y+figure[i][j].y;
                if(tx<0||7<tx||ty<0||7<ty){
                    match=false;
                    break;
                }
                if(s[ty][tx]=='0'){
                    match=false;
                    break;
                }
            }
            if(match) break;
        }
        cout<<(char)('A'+i)<<'\n';
    }while(cin.getline(s[0], 10));
    return 0;
}