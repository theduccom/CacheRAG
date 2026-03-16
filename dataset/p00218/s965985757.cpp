#include <iostream>
using namespace std;

int main(){
    while(1){
        int n;
        cin >> n;
        if(!n) break;

        for(int i = 0;i < n;i++){
            int pm, pe, pj;
            cin >> pm >> pe >> pj;

            char ans = 'C';
            int ave = (pm + pe + pj) / 3;
            if(pm == 100 || pe == 100 || pj == 100) ans = 'A';
            else if((pm + pe) / 2 >= 90) ans = 'A';
            else if(ave >= 80) ans = 'A';
            else if(ave >= 70) ans = 'B';
            else if(ave >= 50 && (pm >= 80 || pe >= 80)) ans = 'B';

            cout << ans << endl;
        }
    }
    return 0;
}