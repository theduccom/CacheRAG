#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n;
    cin>>n;
    if(n==0)return -1;
    int ans=0;
    int ansn;
    for (int i = 0; i < n; ++i) {
        int t;
        int a,b;
        cin>>t>>a>>b;

        if(ans<a+b){
            ans=a+b;
            ansn=t;
        }
    }
    cout<<ansn<<" "<<ans<<endl;
    return 0;
}

int main(){
    while(solve()==0);
    return 0;
}
