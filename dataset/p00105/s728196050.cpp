#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <stack>
#include <functional>
#include <queue>
#include <cmath>
#include <set>
#include <bitset>

#define rep(i,j,k) for(int i=j;i<k;i++)
#define Sort(x) sort((x).begin(),(x).end())
#define fi first
#define se second
#define vi vector<int>
#define INF 1000000000
#define MOD 1000000009
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef std::pair<int,int> pii;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

using namespace std;


int main(){
    vector<string> v;
    vector<vector<int>> count;
    string s;
    int n;
    for(int i=0;cin>>s>>n;i++){
        if(i==0){
            v.pb(s);
            count.pb(vector<int>(1,n));
        }else {
            bool f=true;
            rep(i,0,v.size()){
                if(v[i]==s){
                    count[i].pb(n);
                    f=false;
                }
            }
            if(f){
                v.pb(s);
                count.pb(vector<int>(1,n));
            }
        }
    }
    
    rep(i,0,count.size())Sort(count[i]);
    
    rep(i,0,v.size()-1){
        rep(j,i+1,v.size()){
            if(v[i]<v[j]){
                string temp=v[i];
                v[i]=v[j];
                v[j]=temp;
                
                count[i].swap(count[j]);
            }
        }
    }
    
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<endl;
        rep(j,0,count[i].size()){
            if(j!=0)cout<<" ";
            cout<<count[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}


