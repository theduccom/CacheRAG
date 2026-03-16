#include<bits/stdc++.h>
using namespace std;
char umi[100][100],a;
int ans;
void solve(int x,int y);

int main(){

    while(cin>>umi[1][1]){
    for(int i=1;i<=12;i++){
        for(int j=1;j<=12;j++){
            if(!(i==1&&j==1))cin >> umi[j][i];
        }
    }
    for(int i=1;i<=12;i++){
        for(int j=1;j<=12;j++){
            if(umi[j][i]=='1'){
                ans++;
                umi[j][i]='0';
                solve(j,i);
            }
        }
    }
    cout << ans << endl;
    ans=0;
    fill(umi[0],umi[12],'0');

    }

return 0;
}

void solve(int x,int y){
    if(umi[x+1][y]=='1'){
     umi[x+1][y]='0';
     solve(x+1,y);
    }
    if(umi[x-1][y]=='1'){
     umi[x-1][y]='0';
     solve(x-1,y);
    }
    if(umi[x][y+1]=='1'){
     umi[x][y+1]='0';
     solve(x,y+1);
    }
    if(umi[x][y-1]=='1'){
     umi[x][y-1]='0';
     solve(x,y-1);
    }
}