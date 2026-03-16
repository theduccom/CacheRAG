#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sieve(int n,vector<char>& v){
    v.resize(n+1);
    fill(v.begin(),v.end(),true);
    v[0]=v[1]=false;

    for(int i=2;i*i<=n;i++){
        if(v[i]){
            for(int j=2*i;j<=n;j+=i){
                v[j]=false;
            }
        }
    }
}

int main(){
    vector<char> prime_list;
    int n;

    sieve(1<<22,prime_list);

    while(cin>>n,n){
        int sum=0;
        for(int i=2;n;i++){
            if(prime_list[i]){
                sum+=i;
                n--;
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}