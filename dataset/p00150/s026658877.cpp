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
#define MAX 9999999
using namespace std;
typedef pair<int, int> pii;
typedef pair<double,double>pdd;
typedef pair<ll,ll>pll;
int main(){
    vector<bool>IsPrime(MAX+1,true);
    vector<int>Prime(MAX+1,0); //Primearray
    int Primecounter =0;                  //Primearray counter;
    for(int i = 2; i<MAX+1;i++){
        if(IsPrime[i]){
            for(int j = 2;i*j<MAX;j++)
                IsPrime[i*j] = false;//?´???°??????Primearray???????´??????????????????°?????¨???false???
            Prime[Primecounter] = i;
            Primecounter++;
        }
    }
    int n;
    while(cin>>n,n){
        int maxi=0;
        for(int i=n; i>=2; i--){
            if(IsPrime[i]&&IsPrime[i-2]){
                cmax(maxi,i);
                break;
            }
        }
        cout<<maxi-2<<" "<<maxi<<endl;
    }
}