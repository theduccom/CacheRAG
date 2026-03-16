#include<cstdio>
#include<vector>
using namespace std;

bool isprime[50010];
int ans[50010];

int main()
{
    for(int i=2; i<=50000; i++){
        isprime[i] = true;
    }
    for(int i=2; i<300; i++){
        if(isprime[i]){
            for(int j=i*i; j<=50000; j+=i){
                isprime[j]=false;
            }
        }
    }

    vector<int> primes;
    for(int i=2; i<=50000; i++){
        if(isprime[i])primes.push_back(i);
    }
    for(int i=0; primes[i]<=25000; i++){
        for(int j=i; primes[i]+primes[j]<=50000; j++){
            ans[primes[i]+primes[j]]++;
        }
    }

    int n;
    while(scanf("%d",&n),n){
        printf("%d\n",ans[n]);
    }
    return 0;
}