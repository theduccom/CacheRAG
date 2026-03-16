#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int base[3]={0,0,0},point=0, out=0;
        string getstr;
        while(1){
                cin >> getstr;
                if(getstr=="HIT"){
                    if(base[2]==1) point++;
                    base[2]=base[1];
                    base[1]=base[0];
                    base[0]=1;
                }else if(getstr=="HOMERUN"){
                    for(int j=0;j<3;j++){
                        if(base[j]==1){
                            point++;
                            base[j]=0;
                        }
                    }
                    point++;
                }else if(getstr=="OUT"){
                    out++;
                }
            if(out > 2) break;
            }
        cout << point << endl;
        }
    return 0;
}