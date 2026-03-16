#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

bool isPrime(int n){
    if(n==1)return false;
    if(n==2)return true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}


int main(){
    int n;
    while(cin>>n){
        if(n==0)break;
        
        for(int i=n;i>=5;i--){
            if(isPrime(i) && isPrime(i-2)){
                cout<<i-2<<" "<<i<<endl;
                break;
            }
        }
    }
    return 0;
}