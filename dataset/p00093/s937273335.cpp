#include <iostream>

using namespace std;

int main(){

    int a,b;
    int cou = -1;
    while(1){

        int count = 0;

        cin >> a >> b;
        if(a == 0 && b == 0) break;
        if(cou != -1) cout << endl;

        for(int i = a; i <= b; i++){
            cou++;
            if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
                cout << i << endl;
                count++;
            }

        }

        if(count == 0){
            cout << "NA" << endl;
        }
    }

    return 0;
}