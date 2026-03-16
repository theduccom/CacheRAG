#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
#define rep(i,n) for(int i = 0 ; i < n ; ++i)
using ll = long long;

vector<int> ans;
void solve(int n){
    int idx = lower_bound(ans.begin(), ans.end(), n+1)-ans.begin();
    --idx;
    cout<<ans[idx]-2<<" "<<ans[idx]<<endl;
}

int main(){
    vector<int> isprime(12345,1);
    isprime[1]=isprime[0]=false;
    for(int i = 2 ; i <=10000 ; ++i){
        if(!isprime[i])continue;
        if(isprime[i-2])ans.push_back(i);
        for(int j = 2 * i ; j <= 10000 ; j+=i){
            isprime[j]=false;
        }
    }
    int n;
    while(cin>>n,n!=0)solve(n);
}
