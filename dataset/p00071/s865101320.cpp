#include<iostream>
#include<string>
using namespace std;

void bomber(string MAP[],int x,int y);

int main(){

    string MAP[8];
    int x,y,n,j=1;

    cin >> n;

    while(j <= n){
        for(int i=0; i<8; i++){
            cin >> MAP[i];
        }

        cin >> x >> y;

        bomber(MAP,x-1,y-1);

        cout << "Data " << j << ':' <<endl;

        for(int i=0; i<8; i++){
            cout << MAP[i] <<endl;
        }
        j++;
    }

    return 0;
}

void bomber(string MAP[],int x,int y){

    if(MAP[y][x] == '0'){
        return;
    }

    MAP[y][x] = '0';

    for(int i=1; i<4; i++){
        if(y-i < 0){
            break;
        }
        if(MAP[y-i][x] == '1'){
            bomber(MAP,x,y-i);
        }
    }

    for(int j=1; j<4; j++){
        if(y+j > 7){
            break;
        }
        if(MAP[y+j][x] == '1'){
            bomber(MAP,x,y+j);
        }
    }

    for(int k=1; k<4; k++){
        if(x-k < 0){
            break;
        }
        if(MAP[y][x-k] == '1'){
            bomber(MAP,x-k,y);
        }
    }

    for(int l=1; l<4; l++){
        if(x+l > 7){
            break;
        }
        if(MAP[y][x+l] == '1'){
            bomber(MAP,x+l,y);
        }
    }
}