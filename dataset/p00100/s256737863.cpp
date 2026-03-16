#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <set>
#include <iomanip>
#include <deque>
#include <stdio.h>
using namespace std;

#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define RREP(i,n) for(int (i)=(int)(n)-1;i>=0;i--)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
#define PB_VEC(Itr1,Itr2) (Itr1).insert((Itr1).end(),(Itr2).begin(),(Itr2).end())
#define UNIQUE(Itr) sort((Itr).begin(),(Itr).end()); (Itr).erase(unique((Itr).begin(),(Itr).end()),(Itr).end())
#define LBOUND(Itr,val) lower_bound((Itr).begin(),(Itr).end(),(val))
#define UBOUND(Itr,val) upper_bound((Itr).begin(),(Itr).end(),(val))
typedef long long ll;

int main(){
    
    while(true){
        int n; cin>>n;
        if(n==0)break;
        map<ll,pair<ll,ll>> m;
        REP(i,n){
            ll e,p,q; cin>>e>>p>>q;
            if(m.find(e)==m.end())m[e]=make_pair(p*q,i);
            else m[e].first+=p*q;
        }
        vector<pair<ll,ll>>ans;
        for(auto itr=m.begin();itr!=m.end();itr++){
            if(itr->second.first>=1000000){
                ans.push_back(make_pair(itr->second.second,itr->first));
            }
        }
        if(ans.size()==0)cout<<"NA"<<endl;
        else{
            sort(ans.begin(),ans.end());
            REP(i,ans.size())cout<<ans[i].second<<endl;
        }
    }
    
    
    
    return 0;
}