#include <iostream>
using namespace std;

int main(){
    while(1){
        long long sale[4001], a, b, c, i, j, n;
        int k = 0;
        cin >> n;
        if(n == 0)break;
        for(i = 0; i < 4001; i++){
            sale[i] = 0;
        }
        for(i = 0; i < n; i++){
            cin >> a >> b >> c;
            if(sale[a] >= 0){
                sale[a] += b*c;
                if(sale[a] >= 1000000){
                    cout << a << endl;
                    sale[a] = -1;
                    k++;
                }
            }
        }
        if(k == 0){
            cout << "NA" << endl;
        }
    }
    return 0;
}