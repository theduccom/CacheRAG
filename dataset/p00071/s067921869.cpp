#include<iostream>
#include<cstdio>
void Blast (int MAP[8][8],int Y,int X);
using namespace std;
int main(){
    int x,y,n,Map[8][8];
    char in[9][8];
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=0;j<8;j++){
            for(int k=0;k<8;k++){
                cin>>in[j][k];
                Map[j][k]=in[j][k] - '0';
            }
        }
        cin>>x>>y;

        Blast(Map,y-1,x-1);

        cout<<"Data "<<i<<":"<<endl;
        for(int j=0;j<8;j++){
            for(int k=0;k<8;k++){
                cout<<Map[j][k];
            }
            cout<<endl;
        }
    }
    return 0;
}

void Blast (int MAP[8][8],int Y,int X)
{
    int dx[]={-1,0,1,0},dy[]={0,1,0,-1};
    MAP[Y][X]=0;
    for(int i=1;i<=3;i++){
        for(int j=0;j<4;j++){
            int ny=Y+dy[j]*i;
            int nx=X+dx[j]*i;
            if(MAP[ny][nx]==1&&ny>=0&&nx>=0&&ny<8&&nx<8){
                Blast(MAP,ny,nx);
            }
        }
    }
    return;
}