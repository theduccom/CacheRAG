#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    char x, y;
    int exist[3] = {1,0,0};
    while( scanf(" %c,%c", &x, &y) != EOF ){
        swap(exist[x-'A'], exist[y-'A']);
    }
    for(int i = 0; i < 3; i++){
        if( exist[i] ){
            printf("%c\n", 'A'+i);
        }
    }
    return 0;
}