#include <bits/stdc++.h>
using namespace std;

bool ip[50001];
int table[50002];
vector<int> vec;

int main() {

    for(int i=0;i<50001;i++){
        ip[i] = true;
    }

    ip[0] = ip[1] = false;

    table[0] = table[1] = 0;

    for(int i=2;i<=50001;i++){
        table[i] = 0;
        if(ip[i]){
            vec.push_back(i);
            for(int j = 2*i;j<=50001;j+=i){
                ip[j] = false;
            }
        }
    }

    int s = vec.size();

    for(int i=0;i<s;i++){
        for(int j=i;j<s;j++){
            if(vec[i]+vec[j] <= 50000) {
                table[vec[i] + vec[j]]++;
            }
        }
    }



    while(1){
        int n;

        cin >> n;

        if(n==0) break;

        cout << table[n] << endl;

    }

    return 0;
}