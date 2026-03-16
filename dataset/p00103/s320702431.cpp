#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int i;
    int n;
    cin >> n;
    int base[3]={0};
    int nout=0;
    int point=0;
    string HIT("HIT");
    string HOMERUN("HOMERUN");
    string OUT("OUT");
    while(n--){
        for(i=0;i<3;i++){
            base[i]=0;
        }
        nout=0;
        point=0;
        while(nout!=3){
            string str;
            cin >> str;
            if(str == HIT){
                for(i=2;i>=0;i--){
                    if(i==2){
                        point += base[i];
                    }
                    if(i!=0){
                        base[i]=0;
                        base[i] += base[i-1];
                    }else{
                        base[i] = 1;
                    }
                }
            }
            if(str == HOMERUN){
                for(i=0;i<3;i++){
                    point += base[i];
                    base[i] = 0;
                }
                point++;
            }
            if(str == OUT){
                nout++;
            }
        }
        cout << point << endl;
    }
    return 0;
}