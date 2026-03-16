#include <iostream>

using namespace std;

int main(){
    int a,b;
    bool f = false;
    while(cin >> a >> b,a+b){
        if(f){
            cout << "" << endl;
        }
        f = true;
        bool flg=true;
        for(int i=a;i<=b;i++){
            if(i%4==0){
                if(i%100==0){
                    if(i%400==0){
                        flg=false;
                        cout << i << endl;
                    }
                }else{
                    flg=false;
                    cout << i << endl;
                }
            }
        }
        if(flg){
            cout << "NA" << endl;
        }

    }
    return 0;
}