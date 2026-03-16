#include <bits/stdc++.h>
#define rep(i,j,k) for(int i=(int)j;i<(int)k;i++)
#define rrep()
#define Sort(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define vi vector<int>
#define INF (int)1e9
#define INFL 1e18
#define MOD 1000000007
#define pb push_back
#define MP make_pair
typedef long long int ll;
typedef std::pair<int,int> P;
int D=1;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

using namespace std;

int main(){
    string s;
    string p="peach",a="apple";
    getline(cin,s);
    rep(i,0,s.length()-4){
        if(s.substr(i,5)=="peach"){
            rep(j,0,5)s[i+j]=a[j];   
        }else if(s.substr(i,5)=="apple"){
            rep(j,0,5) s[j+i]=p[j];
        }
    }
    cout<<s<<endl;
    return 0;
}

