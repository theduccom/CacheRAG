#include <iostream>
#include <cstdio>

using namespace std;

int sosu_f[50001];

void era(void){
    sosu_f[0]=sosu_f[1]=1;
    for(int i=2;i<=50000;i++){
        if(!sosu_f[i]){
            for(int j=i+i;j<=50000;j+=i){
                sosu_f[j]=1;
            }
        }
    }
}

int main(void){
    int n;
    int count;
    
    era();
    
    while(cin>>n,n!=0){
        count=0;
        for(int i=0;i<=n/2;i++){
            if(!sosu_f[i]&&!sosu_f[n-i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}