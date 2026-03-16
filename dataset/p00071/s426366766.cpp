#include <iostream>


using namespace std;

string bom[8];


void chain(int x, int y){
    int move_x[4]={0,0,1,-1};
    int move_y[4]={1,-1,0,0};
    bom[y][x]='0';
    for(int i=0; i<4; i++){
        int cx=x;
        int cy=y;
        for(int j=0; j<3; j++){
            cx+=move_x[i];
            cy+=move_y[i];
            if(cx<0||cy<0||cx>7||cy>7)break;
            if(bom[cy][cx]=='1')chain(cx, cy);
        }
    }
}


int main(void) {
    
    int n;
    cin>>n;
    for(int j=0; j<n; j++){
        for(int i=0; i<8; i++){
            cin>>bom[i];
        }
        int x, y;
        cin>>x>>y;
        x--;
        y--;
        chain(x, y);
        cout<<"Data "<<j+1<<":"<<endl;
        for(int i=0; i<8; i++){
            cout<<bom[i]<<endl;
        }
    }
    
    
    
    
    return 0;
}