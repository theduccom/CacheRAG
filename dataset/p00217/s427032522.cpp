#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void){
    for(;;){
        int p[10010];
        int d1[10010],d2[10010];
        int d[10010];
        int n,ans=0,po;
        cin>>n;
        if(n==0)break;
        for(int i=0;i<n;i++){
            cin>>p[i]>>d1[i]>>d2[i];
            d[i]=d1[i]+d2[i];
            if(ans<d[i]){
                ans=d[i];
                po=p[i];
            }

        }
        cout<<po<<" "<<ans<<endl;

    }
        return 0;

}