#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<complex>
using namespace std;

char m[12][12];
int w[4][2]={{-1,0},{1,0},{0,-1},{0,1}};

void sol(int i,int j) {
    int ni,nj;
    m[i][j]='0';
    for(int k=0;k<4;++k) {
        ni=i+w[k][0];
        nj=j+w[k][1];
        if (ni>=0 && ni<=11 && nj>=0 && nj<=11 ) {
            if(m[ni][nj]=='1') sol(ni,nj);
        }
    }
    return;
}


int main(){
    int ans;
    while (scanf("%s",m[0])!=EOF){
        ans=0;
        for (int i=1;i<12;++i) {
            scanf("%s",m[i]);
        }

        for (int i=0;i<12;++i) {
            for (int j=0;j<12;++j) {
                if (m[i][j]=='1') {
                    sol(i,j);
                    ans++;
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}