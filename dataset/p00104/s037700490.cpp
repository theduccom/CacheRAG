#include<iostream>
using namespace std;

int main()
{
    int x,y;
    while(cin>>x>>y,x||y){
        string map[x];
        for(int i=0;i<x;i++){
            cin>>map[i];
        }
        int X=0,Y=0;
        bool end=false;
        int loopCount=1;
        while(true){
            switch(map[Y][X]){
                case '^' :
                    Y--;
                    break;
                case '>' :
                    X++;
                    break;
                case 'v' :
                    Y++;
                    break;
                case '<' :
                    X--;
                    break;
                case '.' :
                    end=true;
                    break;
            }
            if(end){
                cout<<X<<' '<<Y<<endl;
                break;
            }
            if(loopCount>x*y){
                cout<<"LOOP"<<endl;
                break;
            }
            loopCount++;
        }
    }
}