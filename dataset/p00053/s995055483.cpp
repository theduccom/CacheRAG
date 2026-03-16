#include <iostream>
#include <cstdio>
#include <cstring>

const int P=110000;

using namespace std;

int main(void){
    int i,j,k,l;
    long long n,sum;
    long long prime_list[20000];
    bool prime_f[P];
    
    while(cin>>n,n!=0){
        k=0;
        memset(prime_list,0,sizeof(prime_list));
        for(i=0;i<P;i++){
            prime_f[i]=true;
        }
        prime_f[0]=prime_f[1]=false;
        for(i=2;i<P;i++){
            if(prime_f[i]){
                k++;
                if(k>n)break;
                prime_list[k]=i;
                for(j=2*i;j<=P;j+=i){
                    prime_f[j]=false;
                }
            }
        }
        sum=0;
        for(i=1;i<k;i++){
            sum+=prime_list[i];
        }
        cout<<sum<<endl;
    }
    return(0);
}