#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<bool>L(50000);
    for(int i=0;i<50000;i++)L[i]=true;
    L[0]=L[1]=false;
    for(int i=2;i<50000;i++){
        if(L[i]){
            for(int j=i*2;j<50000;j+=i)L[j]=false;
        }
    }
    int n;
    while(cin>>n&&n){
        if(n%2){
            cout<<L[n-2]<<endl;
            continue;
        }
        int cnt=0;
        for(int i=2;i<=n/2;i++){
            if(L[i]&&L[n-i])cnt++;
        }
        cout<<cnt<<endl;
    }


}