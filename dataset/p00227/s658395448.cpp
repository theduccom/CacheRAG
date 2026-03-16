#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    int n,m;
    while(cin>>n>>m,n){
        int a[1000],ans=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        reverse(a+1,a+n+1);
        for(int i=1;i<=n;i++){
            if(i%m!=0)ans+=a[i];
        }

        cout<<ans<<endl;
    }

    return 0;
}