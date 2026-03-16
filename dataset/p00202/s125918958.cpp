#include <iostream>
using namespace std;

bool p[1000001];

void sieve(){
    for(int i=0;i<1000001;i++)p[i] = true;
    p[0] = p[1] = false;
    for(int i=2;i<1000001;i++){
        if(p[i]){
            for(int j=2*i;j<1000001;j+=i)p[j] = false;
        }
    }
}

int main(){
    int n, x;
    sieve();

    while(1){
        cin>>n>>x;
        if(!n && !x)break;
        bool dp[1000001]= {false};
        int dish[31];
        for(int i=0;i<n;i++){
            cin>>dish[i];
            dp[dish[i]] = true;
        }
    
        for(int i=0;i<n;i++){
            for(int j=0;j<=1000000;j++){
                if(dp[j] && j+dish[i] <= 1000000)
                    dp[j+dish[i]] = true;
            }
        }
    
        int max=0;
        for(int i=0;i<=x;i++){
            if(dp[i] && p[i])max = i;
        }

        if(max) cout<<max<<endl;
        else cout<<"NA"<<endl;
    }

    return 0;
}