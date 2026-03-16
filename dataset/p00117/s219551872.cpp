#include <stdio.h>
#include <math.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<cmath>
#include<numeric>
using namespace std;






int main(){
    int n,m;
    int a[25][25];
    cin>>n>>m;
    for(int i=0;i<25;i++){
        for(int t=0;t<25;t++){
            a[i][t]=-1;
        }
    }
    char q;
    for(int i=0;i<m;i++){
        int b,c,d,e;
        cin>>b>>q>>c>>q>>d>>q>>e;
        a[b][c]=d;
        a[c][b]=e;
    }
    int s,g,gold,p;
    cin>>s>>q>>g>>q>>gold>>q>>p;
    bool j=true;
    int count=0;
    while(j){
        j=false;
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int t=1;t<=n;t++){
                if(a[i][k]==-1 || a[k][t]==-1){continue;}
                if(a[i][t]==-1){a[i][t]=a[i][k]+a[k][t]; j=true; continue;}
                if(a[i][t]>a[i][k]+a[k][t]){a[i][t]=a[i][k]+a[k][t]; j=true;}
            }
        }
    }
        count++;
    }
    cout<<gold-p-a[s][g]-a[g][s]<<endl;
    //cout<<count<<endl;
    
    
    return 0;
}
