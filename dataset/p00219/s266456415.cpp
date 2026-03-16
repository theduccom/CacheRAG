#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n, n){
        int a[10] = {};
        for(int i = 0; i < n; ++i){
            int temp;
            cin >> temp;
            ++a[temp];
        }
        
        for(int i = 0; i < 10; ++i){
            if(a[i] == 0) cout << '-' << endl;
            else {
                for(int j = 0; j < a[i]; ++j){
                    cout << '*';
                }
                cout << endl;
            }
        }
    }
}