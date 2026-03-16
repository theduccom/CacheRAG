#include<bits/stdc++.h>
using namespace std;

int vecx[4]={0,1,0,-1},vecy[4]={1,0,-1,0};

void explore(string atlas[12],int vstd[12][12],int i,int j){
    queue<pair<int,int> > bfs;
    bfs.push(make_pair(i,j));
    while(!bfs.empty()){
        int x=bfs.front().first,y=bfs.front().second;
        vstd[x][y]=1;
        for(int k=0; k<4; k++){
            int nextx=x+vecx[k],nexty=y+vecy[k];
            if(nextx<0||nextx>11||nexty<0||nexty>11)continue;
            if(atlas[x+vecx[k]][y+vecy[k]]=='1'&&vstd[x+vecx[k]][y+vecy[k]]==0){
                bfs.push(make_pair(x+vecx[k],y+vecy[k]));
            }
        }
        bfs.pop();
        //cout<<x<<' '<<y<<endl;
    }
}

int main(){
    string atlas[12];
    int vstd[12][12],cnt;
    while(cin>>atlas[0],!cin.eof()){
        cnt=0;
        for(int i=1; i<12; i++){
            cin>>atlas[i];
        }
        fill(vstd[0],vstd[12],0);
        for(int i=0; i<12; i++){
            for(int j=0; j<12; j++){
                if(vstd[i][j]==0&&atlas[i][j]=='1'){
                    explore(atlas,vstd,i,j);
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}