#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int pap[11][11],dx[]={0,1,0,-1,1,-1,1,-1,2,0,-2,0},dy[]={1,0,-1,0,1,-1,-1,1,0,2,0,-2};
int main(){
int x,y,si,l,ma,cou;
fill(pap[0],pap[0]+10*10,0);
while(scanf("%d,%d,%d",&x,&y,&si)!=EOF){
    if(si==1)l=4;
    if(si==2)l=8;
    if(si==3)l=12;
    pap[x][y]+=1;
    for(int i=0;i<l;i++){
        pap[x+dx[i]][y+dy[i]]+=1;
    }
    /*for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        cout<<pap[i][j];
    }
    cout<<endl;
    }*/
}
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        //cout<<pap[i][j];
        ma=max(ma,pap[i][j]);
        if(pap[i][j]==0){
            cou++;
        }
    }
    //cout<<endl;
}
cout<<cou+2<<endl<<ma<<endl;
return 0;
}