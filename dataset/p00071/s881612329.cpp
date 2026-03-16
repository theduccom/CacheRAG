#include<iostream>
#include<string>
using namespace std;
char s[20][20];
void bon(int x,int y){
    s[x][y]='0';
    for(int i=1;i<4;i++){
        if((x+i)<=8&&s[x+i][y]=='1')bon(x+i,y);
        if((x-i)>0&&s[x-i][y]=='1')bon(x-i,y);
        if((y+i)<=8&&s[x][y+i]=='1')bon(x,y+i);
        if((y-i)>0&&s[x][y-i]=='1')bon(x,y-i);
    }
    }
int main(){
    int n;
    cin >> n;
    for(int o=1;o<=n;o++){
    for(int k=1;k<=8;k++){
        for(int j=1;j<=8;j++){
            cin >> s[j][k];
        }
    }
    int X,Y;
    cin >> X >> Y;
    bon(X,Y);
    cout << "Data " << o << ':' << endl;
    for(int k=1;k<9;k++){
        for(int j=1;j<9;j++){
            cout << s[j][k];
        }
        cout << endl;
    }
    }
return 0;
}