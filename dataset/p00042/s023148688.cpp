#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main(){
    int w,n,va,we;
    int dp[10000];
    char c;
    vector<pair<int,int> >vec;
    int cas=0;
    while(cin>>w>>n,w){
        for(int i=0;i<n;i++){
            cin>>va>>c>>we;
            vec.push_back(make_pair(va, we));
        }
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++){
            int tv=vec[i].first, tw=vec[i].second;
            for(int j=w;j>=0;j--){
                if(tw+j<=w){
                    dp[tw+j]=max(dp[tw+j],dp[j]+tv);
                }
            }
        }
        int aw=0,av=0;
        for(int i=0;i<=w;i++) {
            if(dp[i]>av){
                aw=i;
                av=dp[i];
            }
        }
        cout<<"Case "<<(++cas)<<":"<<endl<<av<<endl<<aw<<endl;
        vec.clear();
    }
}