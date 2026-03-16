#include<iostream>
using namespace std;

int main(){
    int n;
    bool pr[105000]={0};
    for(int i=2;i<400;i++)
        for(int j=i;j*i<105000;j++)
            pr[j*i]=1;
    while(cin>>n,n){
        int ans=0,cu=2;
        while(n--){
            while(pr[cu])cu++;
            ans+=cu++;
        }
        cout<<ans<<endl;
    }
}