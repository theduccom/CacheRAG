#include <iostream>
#include <algorithm>

using namespace std;

int main(){
        int n;
        cin >> n;
        while(n){
                int sum = 0;
                for(int i  = 1; i <= n; i++){
                        int k = i;
                        while(!(k%5)){
                                k /= 5;
                                sum++;
                        }   
                }   
                cout << sum << endl;
                cin >> n;
        }   
}