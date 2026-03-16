#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<int,int>pii;
int main(){
    int n;
    while(cin>>n,n){
        long long S[4000]={0};
        int B[4000]={0},cnt=1;
        while(n--){
            long long n,m,o;
            cin>>n>>m>>o;
            S[n-1]+=m*o;
            if(B[n-1]==0){
                B[n-1]=cnt;
                cnt++;
            }

        }
        vector<pii>V;
        for(int i=0;i<4000;i++)
            if(S[i]>=1000000){
                V.push_back(pii(B[i],i));
            }
        sort(V.begin(),V.end());
        for(int i=0;i<V.size();i++)cout<<V[i].second+1<<endl;
        if(V.size()==0)cout<<"NA"<<endl;
    }
}