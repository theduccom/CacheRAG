#include <iostream>
#include <cstdio>

const int INF=100000;

using namespace std;

int main(void){
    int list[21][21];
    int n,m;
    int a,b,c,d;
    int x,y,z,w;
    int i,j,k;
    int cost;
    
    for(i=0;i<21;i++){
        fill(list[i],list[i]+21,INF);
    }
    
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d,%d,%d,%d",&a,&b,&c,&d);
        list[a-1][b-1]=c;
        list[b-1][a-1]=d;
    }
    scanf("%d,%d,%d,%d",&x,&y,&z,&w);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                if(list[j][k]>list[j][i]+list[i][k]){
                    list[j][k]=list[j][i]+list[i][k];
                }
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        }
    }
    cost=z-w-list[x-1][y-1]-list[y-1][x-1];
    cout<<cost<<endl;
    return(0);
}