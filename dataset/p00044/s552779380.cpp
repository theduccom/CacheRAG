#include<iostream>
#include<vector>

using namespace std;

#define MAX 100000

int main(){

    vector<bool> pr(MAX,true);
    vector<int> prime;
    for(int i = 2; i < MAX; i++)if(pr[i]){
        prime.push_back(i);
        for(int j = 2; i*j < MAX; j++)pr[i*j] = false;
    }
    int n;
    while(cin >> n){
        int ans = lower_bound(prime.begin(),prime.end(),n) - prime.begin()-1;
        if(prime[ans+1] == n)
            cout << prime[ans] << " " << prime[ans+2] << endl;
        else
            cout << prime[ans] << " " << prime[ans+1] << endl;
    }
}

