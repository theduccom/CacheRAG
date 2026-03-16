#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void){
    int a[30][30]={{0}};
    char str;
    int cnt=0,m;
    int ans=0;
    int x,y,z;
    while(scanf("%d%c%d%c%d",&x,&str,&y,&str,&z)!=EOF){
        x+=10,y+=10;
        if(z==1){
            a[x][y]++;
            a[x+1][y]++;
            a[x-1][y]++;
            a[x][y+1]++;
            a[x][y-1]++;
 
        }
        else if(z==2){
            a[x][y]++;
            a[x+1][y+1]++;
            a[x+1][y-1]++;
            a[x+1][y]++;
            a[x-1][y+1]++;
            a[x-1][y-1]++;
            a[x-1][y]++;
            a[x][y+1]++;
            a[x][y-1]++;
 
 
        }
        else if(z==3){
            a[x+1][y]++;
            a[x+2][y]++;
            a[x][y+1]++;
            a[x][y+2]++;
            a[x-1][y]++;
            a[x-2][y]++;
            a[x][y-1]++;
            a[x][y-2]++;
            a[x+1][y+1]++;
            a[x-1][y-1]++;
            a[x+1][y-1]++;
            a[x-1][y+1]++;
            a[x][y]++;
 
 
 
 
        }
 
 
    }
    for(int i=10;i<20;i++){
            for(int j=10;j<20;j++){
                if(a[i][j]==0)cnt++;
                ans=max(ans,a[i][j]);
            }
        }
        cout<<cnt<<endl<<ans<<endl;
 
 
 
    return 0;
}