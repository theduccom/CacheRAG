#include <iostream>
using namespace std;

int main(){
    int n;
    int ja,ma,en;
    while(1){
        cin >> n;
        if(n == 0) break;
        for(int i=0;i<n;i++){
            cin >> ma >> en >> ja;
            if(ma == 100 || en == 100 || ja == 100){
                cout << "A" << endl;
            }
            else if((ma + en) / 2 >= 90){
                cout << "A" << endl;
            }
            else if((ma + en + ja) / 3 >= 80){
                cout << "A" << endl;
            }
            else if((ma + en + ja) / 3 >= 70){
                cout << "B" << endl;
            }
            else if((ma + en + ja) / 3 >= 50 && (ma >= 80 || en >= 80)){
                cout << "B" << endl;
            }
            else {
                cout << "C" << endl;
            }
        }
    }
}