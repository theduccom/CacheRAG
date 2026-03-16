 #include<bits/stdc++.h>
using namespace std;
int n,a,b,c;
char miti[10][10];
void bobm(int x,int y){
    for(int s=1;s<=3;s++){
     if(x+s<9){
        if(miti[x+s][y]=='1'){
                miti[x+s][y]='0';
                bobm(x+s,y);
                }
     }
     if(y-s>0){
        if(miti[x][y-s]=='1'){
                miti[x][y-s]='0';
                bobm(x,y-s);
                }
     }
     if(x-s>0){
        if(miti[x-s][y]=='1'){
                miti[x-s][y]='0';
                bobm(x-s,y);
                }
     }
     if(y+s<9){
        if(miti[x][y+s]=='1'){
                miti[x][y+s]='0';
                bobm(x,y+s);
                }
     }
                        }
}

int main(){

    cin >> n;
    for(int k=1;k<=n;k++){

    for(int i=1;i<9;i++){
        for(int j=1;j<9;j++){
            cin >> miti[j][i];
        }
    }

    cin >> a >> b;
    miti[a][b]='0';
    bobm(a,b);

    cout << "Data " << k << ":" << endl;
    for(int i=1;i<9;i++){
        for(int j=1;j<9;j++){
            cout << miti[j][i];
        }
        cout << endl;
        }
    }

return 0;
}