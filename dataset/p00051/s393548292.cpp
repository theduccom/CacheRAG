#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int tonum(int *lis){
    int ans=0;
    int pp=10000000;
    for(int i=0;i<8;i++){
        ans+=pp*(*(lis+i));
        pp/=10;
    }
    return ans;
}
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        string S;
        cin>>S;
        int lis[8];
        for(int i=0;i<8;i++)lis[i]=S[i]-'0';
        sort(lis,lis+8);
        int mi=tonum(lis);
        reverse(lis,lis+8);
        int ma=tonum(lis);
        cout<<ma-mi<<endl;
    }
    return 0;
}