#include<iostream>
#include<string>
using namespace std;

int main()
{
    while(true){
        int i=0;
        string map[8];
        while(cin>>map[i],!cin.eof()){
            i++;
            if(i==8){
                break;
            }
        }
        if(cin.eof()){
            break;
        }
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(i<7 && j<7){
                    if(map[i][j]=='1' && map[i][j+1]=='1' && map[i+1][j]=='1' && map[i+1][j+1]=='1'){
                        cout<<'A'<<endl;
                    }
                }
                if(i<5){
                    if(map[i][j]=='1' && map[i+1][j]=='1' && map[i+2][j]=='1' && map[i+3][j]=='1'){
                        cout<<'B'<<endl;
                    }
                }
                if(j<5){
                    if(map[i][j]=='1' && map[i][j+1]=='1' && map[i][j+2]=='1' && map[i][j+3]=='1'){
                        cout<<'C'<<endl;
                    }
                }
                if(j>0 && i<6){
                    if(map[i][j]=='1' && map[i+1][j]=='1' && map[i+1][j-1]=='1' && map[i+2][j-1]=='1'){
                        cout<<'D'<<endl;
                    }
                }
                if(i<7 && j<6){
                    if(map[i][j]=='1' && map[i][j+1]=='1' && map[i+1][j+1]=='1' && map[i+1][j+2]=='1'){
                        cout<<'E'<<endl;
                    }
                }
                if(i<6 && j<7){
                    if(map[i][j]=='1' && map[i+1][j]=='1' && map[i+1][j+1]=='1' && map[i+2][j+1]=='1'){
                        cout<<'F'<<endl;
                    }
                }
                if(i<7 && j>1){
                    if(map[i][j]=='1' && map[i][j-1]=='1' && map[i+1][j-1]=='1' && map[i+1][j-2]=='1'){
                        cout<<'G'<<endl;
                    }
                }
            }
        }
    }
    return 0;
}