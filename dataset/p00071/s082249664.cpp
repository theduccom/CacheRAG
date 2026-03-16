#include<bits/stdc++.h>


using namespace std;

char a[20][20];
long long int n,X,Y,text[1000][20][20],i;

void K(int x,int y){
    a[x][y]='0';
    for(int k=1;k<4;k++){
        if((x+k)<9&&a[x+k][y]=='1')K(x+k,y);
        if((x-k)>0&&a[x-k][y]=='1')K(x-k,y);
        if((y+k)<9&&a[x][y+k]=='1')K(x,y+k);
        if((y-k)>0&&a[x][y-k]=='1')K(x,y-k);
    }
}
int main(){

cin >> n;

for(i=1;i<=n;i++){
    for(int k=1;k<9;k++){
        for(int j=1;j<9;j++)
        cin >> a[k][j];
    }
    cin >> X >> Y;
    K(Y,X);
    cout << "Data " << i << ":" << endl;
    for(int i=1;i<9;i++){
        for(int j=1;j<9;j++){
            cout << a[i][j];
        }
        cout << endl;
    }
}
return 0;
}