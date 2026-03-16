#include <iostream>

using namespace std;

int main(){
        bool list[50001];
        list[0] = list[1] = true;
        for(int i = 2; i <= 50000; i++){
                list[i] = false;
        }   
        for(int i = 2; i <= 50000; i++){
                if(!list[i]){
                        for(int j = 2; i*j <= 50000; j++){
                                list[i*j] = true;
                        }   
                }   
        }   
        int n;
        cin >> n;
        while(n){
                if(n > 50000) for(;;);
                int sum = 0;
                for(int i = 2; i*2 <= n; i++){
                        if(!list[i] && !list[n-i]) sum++;
                }   
                cout << sum << endl;
                cin >> n;
        }   
}