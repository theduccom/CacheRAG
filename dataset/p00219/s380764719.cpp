#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    while(cin >> n && n){

        int data[10] = {};
        for(int i = 0; i < n; ++i){
            int a;
            cin >> a;
            data[a] ++;
        }

        for(int i = 0; i < 10; ++i){
            if(data[i] == 0){
                cout << '-' << endl;
            }
            else {
                for(int j = 0; j < data[i]; ++j){
                    cout << '*';
                }
                cout << endl;
            }
        }
    }

   return 0;
}