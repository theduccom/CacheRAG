#include <cstdio>
using namespace std;

int l[10], v1, v2;

int main(){
    while( scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",
                   l,l+1,l+2,l+3,l+4,l+5,l+6,l+7,l+8,l+9,
                   &v1, &v2) != EOF ){
        int sl = 0;
        for(int i = 0; i < 10; i++){
            sl += l[i];
        }
        double p = (double)sl*v1/(v1+v2);
        int i, k = 0;
        for(i = 0; i < 10; i++){
            k += l[i];
            if( p <= k ) break;
        }
        printf("%d\n", i+1);
    }

    return 0;
}