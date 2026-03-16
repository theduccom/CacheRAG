#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> prime_table;
    bool find[105000];
    for(int i=2; i<105000; i++){
        find[i] = false;
    }
    for(int i=2; i*i<105000; i++){
        if(find[i]) continue;
        for(int j=i*2; j<105000; j+=i){
            if(!find[j]) find[j] = true;
        }
    }
    prime_table.push_back(2);
    for(int i=3; i<105000; i+=2){
        if(!find[i]) prime_table.push_back(i);
    }

    int n;

    while(cin >> n, n != 0){
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += prime_table[i];
        }
        cout << sum << endl;
    }
    return 0;
}