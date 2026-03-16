#include<vector>
#include<cstdio>
using namespace std;
bool prime[50001];
int ans[50001];
int main(){
    prime[1] = true;
    for(int i = 2; i*i <= 50000; i++){
        if(prime[i] == false){
            for(int j = i; j <= 50000; j+=i){
                prime[j] = true;
            }
            prime[i] = false;
        }
    }
    vector<int> p;
    for(int i = 1; i <= 50000; i++){
        if(!prime[i]) p.push_back(i);
    }
    for(int i = 0; p[i] <= 25000; i++){
        for(int j = i; p[i]+p[j] <= 50000; j++){
            ans[p[i]+p[j]]++;
        }
    }
    int n;
    while(scanf("%d",&n),n){
        printf("%d\n",ans[n]);
    }
    return 0;
}