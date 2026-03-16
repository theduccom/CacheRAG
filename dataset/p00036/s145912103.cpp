#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
#include<map>
#include<cmath>
#include<complex>
using namespace std;

typedef complex<double> P;

#define X real()
#define Y imag()


int main(){
    int mod=1000000007;
    int ax, ay;
    char f[12][12];
    bool flag=0;
    for (int i=0;i<12;++i) {
        for (int j=0;j<12;++j) {
            f[i][j]=0;
        }
    }

    for (;;) {
        for (int i=0;i<8;++i) {
            if(scanf("%s",f[i])==EOF) {
                flag=1;
                break;
            }
        }
        if (flag) break;

        for(int i=0;i<64;++i) {
            if (f[i/8][i%8]=='1') {
                ax=i%8;
                ay=i/8;
                break;
            }
        }
        if (f[ay+1][ax]=='1' && f[ay][ax+1]=='1' && f[ay+1][ax+1]=='1') printf("A\n");
        else if (f[ay+1][ax]=='1' && f[ay+2][ax]=='1' && f[ay+3][ax]=='1') printf("B\n");
        else if (f[ay][ax+1]=='1' && f[ay][ax+2]=='1' && f[ay][ax+3]=='1') printf("C\n");
        else if (f[ay+2][ax-1]=='1' && f[ay+1][ax]=='1' && f[ay+1][ax-1]=='1') printf("D\n");
        else if (f[ay][ax+1]=='1' && f[ay+1][ax+1]=='1' && f[ay+1][ax+2]=='1') printf("E\n");
        else if (f[ay+1][ax]=='1' && f[ay+1][ax+1]=='1' && f[ay+2][ax+1]=='1') printf("F\n");
        else if (f[ay][ax+1]=='1' && f[ay+1][ax]=='1' && f[ay+1][ax-1]=='1') printf("G\n");
    }
    return 0;
}