#include <iostream>
using namespace std;

int main(){
    int a, b;
    bool flag=false;
    bool ini=false;
    while(cin >> a >> b, a != 0 && b != 0){
        flag = false;
        if(ini)cout << endl;
        else ini = true;
        for(int y = a; y<=b; y++){
            if(y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)){
                flag = true;
                cout << y << endl;
            }
        }

        if(!flag){
            cout << "NA" << endl;
        }
    }

    return 0;
}