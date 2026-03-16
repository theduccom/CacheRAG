#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    bool prime[20000];
    fill(prime,prime+20000,true);
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=20000;i++){
        if(prime[i])for(int j=i*2;j<=20000;j+=i)prime[j]=false;
    }
    int n;
    while(cin>>n,n){
        do{
            if(prime[n]&&prime[n-2]){
                cout<<n-2<<" "<<n<<endl;
                break;
            }

        }while(n--,n>=5);
    }
}