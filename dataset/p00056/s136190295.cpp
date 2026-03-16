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
#define MAX 50001
using namespace std;
typedef pair<int, int> pii;
typedef pair<double,double>pdd;
typedef pair<ll,ll>pll;
int main(){
    int n;
    vector<bool>Primecheck(MAX+1,true);
    vector<int>Primenumber(MAX+1,0); //Primearray
    int Primecounter =0;//Primearray counter;
    Primecheck[1]=false;
    Primecheck[0]=false;
    for(int i = 2; i<MAX+1;i++){
        if(Primecheck[i]){
            for(int j = 2;i*j<MAX;j++)
                Primecheck[i*j] = false;//?´???°??????Primearray???????´??????????????????°?????¨???false???
            Primenumber[Primecounter] = i;
            Primecounter++;
        }
    }
    while(cin>>n,n){
        ll ans=0;
        rep(i,Primecounter){
            if(Primenumber[i]>n/2)break;
            if(Primecheck[n-Primenumber[i]])ans++;
        }
        cout<<ans<<endl;
    }
}