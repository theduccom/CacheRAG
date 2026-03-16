#include <iostream>
using namespace std;

int main(){
        int n;
        int x;
        int icecream[10];

    while(cin >> n, n != 0){
            for(int i=0; i<10; i++) icecream[i] = 0;


            for(int i=1; i<=n; i++){
                    cin >> x;
                    icecream[x]++;
            }

            for(int i=0; i<10; i++){
                    if(icecream[i] == 0){
                            cout << "-" << endl;
                            continue;
                    }
                    for(int j=1; j<=icecream[i]; j++){
                            cout << "*";
                    }
                    cout << endl;
            }
    }
    return 0;
}