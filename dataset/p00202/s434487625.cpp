#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <deque>
#include <queue>
#include <tuple>
#include <queue>
#include <functional>
#include <cmath>
#include <iomanip>
#include <map>
#include <set>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <complex>
#include <iterator>
#include <array>
#include <memory>
#include <stack>
#define vi vector<int>
#define vvi vector<vector<int> >
#define ll long long int
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define ld long double
#define INF 1e9
#define EPS 0.0000000001
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,s,n) for(int i=s;i<n;i++)
#define all(in) in.begin(), in.end()
template<class T, class S> void cmin(T &a, const S &b) { if (a > b)a = b; }
template<class T, class S> void cmax(T &a, const S &b) { if (a < b)a = b; }
#define MAX 1000000+1
using namespace std;
typedef pair<int, int> pii;
typedef pair<double,double>pdd;
typedef pair<ll,ll>pll;
vector<bool>Isprime(MAX+1,true);
vi dp(MAX+1,0);
int main(){
    int n;
    int Primecounter =0;                  //Primearray counter;
    for(int i = 2; i<MAX+1;i++){
        if(Isprime[i]){
            for(int j = 2;i*j<MAX;j++)
                Isprime[i*j] = false;//テァツエツ?ヲツ閉ーテ」ツ?ェテ」ツつ臼rimearrayテ」ツ?ォテヲツ?シテァツエツ催」ツ?療」ツ?ヲテ」ツ?敕」ツ?ョテ・ツ?催ヲツ閉ーテ」ツつ津・ツ?ィテ」ツ?ヲfalseテ」ツ?ォ
            Primecounter++;
        }
    }
    int x;
    while(cin>>n>>x,n+x){
        rep(i,x+1)dp[i]=0;
        vi tiya;
        rep(i,n){
            int gotiusa_is_a_god_anime;
            cin>>gotiusa_is_a_god_anime;
            tiya.push_back(gotiusa_is_a_god_anime);
            dp[gotiusa_is_a_god_anime]=1;
        }
        rep(j,n)rep(i,x+1){
            if(dp[i]){
                if(i+tiya[j]<=x) dp[i+tiya[j]]=1;
            }
        }
        int maxi=-INF;
        for(int i=1; i<=x;i++)if(Isprime[i]&&dp[i])cmax(maxi,i);
        if(maxi!=-INF&&maxi!=1)cout<<maxi<<endl;
        else cout<<"NA"<<endl;
    }
}