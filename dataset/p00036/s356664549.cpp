#include<iostream>
using namespace std;

struct pattern_t {
    int w;
    int h;
    char *pat;
    pattern_t( const int _w, const int _h, const char *_pat ){
        w = _w;
        h = _h;
        pat = new char[w*h];
        for( int i=0; i<w*h; i++ ){
            pat[i] = _pat[i];
        }
    }
    ~pattern_t(){
        if( pat ){
            delete[] pat;
            pat = 0;
        }
    }
};

int main(){
    pattern_t patA(2,2,"1111"),
              patB(1,4,"1111"),
              patC(4,1,"1111"),
              patD(2,3,"011110"),
              patE(3,2,"110011"),
              patF(2,3,"101101"),
              patG(3,2,"011110");
    pattern_t *patterns[7] = {&patA, &patB, &patC, &patD, &patE, &patF, &patG};
    char field[8][8];
    while(1){
        for( int i=0; i<8; i++ ){
            string in;
            if(!(cin >> in))   return 0;
            for( int j=0; j<8; j++ ){
                field[i][j] = in[j];
            }
        }
        for( int sy=0; sy<8; sy++ ){
            for( int sx=0; sx<8; sx++ ){
                for( int p=0; p<7; p++ ){
                    pattern_t *pt = patterns[p];
                    if( sy+pt->h > 8 || sx+pt->w > 8 )
                        continue;
                    bool miss = false;
                    for( int dy=0; dy<pt->h; dy++ ){
                        for( int dx=0; dx<pt->w; dx++ ){
                            if( pt->pat[dy*pt->w+dx] != field[sy+dy][sx+dx] ){
                                miss = true;
                                break;
                            }
                        }
                        if( miss )  break;
                    }
                    if( !miss ){
                        cout << (char)('A'+p) << endl;
                    }
                }
            }
        }
    }
    return 0;
}