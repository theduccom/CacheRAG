#include <cstdio>
using namespace std;

char c[8][12];

int p;

int find(){
    int i = 0;
    while( c[i/8][i%8] == '0' ) i++;
    return i;
}

bool ex1(int d, int r){
    return c[p/8+d][p%8+r] == '1';
}

int main(){
    char dummy[4];
    while( true ){
        int i = 0;
        while( i < 8 && scanf("%s", c[i]) != EOF ){
            i++;
        }
        if( i < 8 ) break;
        p = find();
        if( ex1(0,1) && ex1(1,0) ){
             if( ex1(1,1) ) puts("A");
             else puts("G");
        }else if( ex1(2,0) ) puts("B");
        else if( ex1(0,2) ) puts("C");
        else if( ex1(1,0) ){
            if( ex1(1,1) ) puts("F");
            else puts("D");
        }else puts("E");
        fgets(dummy, 4, stdin);
    }
    return 0;
}