#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<algorithm>
using namespace std;
struct pzl{
    vector<int>PV;
    int zero,cnt;
    pzl(vector<int>PV_,int zero_,int cnt_){
        PV=PV_;zero=zero_;cnt=cnt_;
    }
};
pzl exswap(pzl a,int n){
    swap(a.PV[a.zero],a.PV[a.zero+n]);
    a.zero+=n;
    a.cnt++;
    return a;
}
int main(){
    map<vector<int>,int>M;
    vector<int>V(8);
    for(int i=0;i<8;i++)V[i]=i;
    queue<pzl>Q;
    pzl start(V,0,0);
    Q.push(start);
    while(!Q.empty()){

        pzl a=Q.front();
        Q.pop();
        if((a.PV==start.PV&&a.cnt!=0)||M[a.PV])continue;
        M[a.PV]=a.cnt;
        if(a.zero>3)Q.push(exswap(a,-4));
        if(a.zero<4)Q.push(exswap(a,4));
        if(a.zero!=0&&a.zero!=4)Q.push(exswap(a,-1));
        if(a.zero!=3&&a.zero!=7)Q.push(exswap(a,1));

    }
    vector<int>inp(8);
    while(cin>>inp[0]){
        for(int i=1;i<8;i++)cin>>inp[i];
        cout<<M[inp]<<endl;
    }
}