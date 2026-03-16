#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

/**
 * vector<int>ar(3);
 * for(auto&e:ar){
 *     scanf("%d",&e);
 * }
 * sort(ar.begin(),ar.end())
 * int sum=accumulate(ar.begin(),ar.end(),0);
 **/

char sute[1];
char m[8][8];
int w[12][2]={{-3,0},{-2,0},{-1,0},{3,0},{2,0},{1,0},{0,-3},{0,-2},{0,-1},{0,1},{0,2},{0,3}};
void bomb(int i,int j){
    int ni,nj;
    for (int k=0;k<12;++k) {
        m[i][j]='0';
        ni=i+w[k][0];
        nj=j+w[k][1];
        if (ni>=0 && ni<8 && nj>=0 && nj<8) {
            if (m[ni][nj]=='1') {
                bomb(ni,nj);
            } else {
                m[ni][nj]='0';
            }
        }
    }
    return;
}

int main(){
    int mod=1000000007;
    int n,cnt=1,x,y;
    scanf("%d",&n);
    for (int i=0;i<n;++i){
        fgets(sute,1,stdin);
        for (int j=0;j<8;++j) {
            scanf("%s",m[j]);
        }
        scanf("%d",&x);
        scanf("%d",&y);
        bomb(y-1,x-1);
        printf("Data %d:\n",cnt);
        cnt++;
        for (int j=0;j<8;++j) {
            for (int k=0;k<8;++k) {
                printf("%c",m[j][k]);
            }
            printf("\n");
        }
    }
    return 0;
}