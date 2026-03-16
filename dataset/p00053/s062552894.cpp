#include <iostream>
using namespace std;
#define MAX 1000000
void sosu();

int prime[1000000]={0};

int main(){
    int n,cnter,cnt,ans;
    sosu();
    while(1){
        cnt=0;
        cnter=2;
        ans=0;
        cin >> n;
        if(n == 0) break;
        while(1){
            if(cnt == n) break;
            if(prime[cnter] == 0){
                ans += cnter;
                cnt++;
            }
            cnter++;
        }
        cout << ans << endl;
    }
}

void sosu(){
    for(int i=2;i<MAX/2;i++){
        for(int j=2;i*j <= MAX;j++){
            prime[i*j] = 1;
        }
    }
}