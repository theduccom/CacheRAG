#include <iostream>
#include <string>
using namespace std;
int main(){
    int inning;
    cin >> inning;
    for(int i=0;i<inning;i++){
        int point,runner,out;
        point=runner=out=0;
        while(out!=3){
            char c[8];
            cin >> c;
            if(c[0]=='O')
                out+=1;
            if(c[0]=='H' && c[1]=='I'){
                if(runner==3)
                    point+=1;
                else
                    runner+=1;
            }
            if(c[0]=='H' && c[1]=='O'){
                point +=runner+1;
                runner =0;
            }
        }
        cout << point << endl;
    }
}