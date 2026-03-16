#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
    while (1){
        int h,w; cin>>h>>w;
        if(h+w==0)
            break;
        bool came[h][w]={},loop=0;
        string in[h];
        for(int i=0; i<h; i++){
            cin>>in[i];
        }
        int x=0,y=0;
        while (in[y][x]!='.'){
            if(came[y][x]){
                loop=1;
                break;
            }
            came[y][x]=1;
            switch (in[y][x]){
                case '>':
                    x++;
                    break;
                case '<':
                    x--;
                    break;
                case '^':
                    y--;
                    break;
                case 'v':
                    y++;
                    break;
            }
        }
        if(loop)
            cout<<"LOOP\n";
        else
            cout<<x<<" "<<y<<endl;
//      cout<<in[y][x]<<endl;
    }
    return 0;
}
