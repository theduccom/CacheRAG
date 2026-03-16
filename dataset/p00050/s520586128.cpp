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
    string s; getline(cin,s);
    for(int i=0; i<s.size();i++){
        if(s[i]=='p'&&i<s.size()-4)
            if(s[i+1]=='e')
                if(s[i+2]=='a')
                    if(s[i+3]=='c')
                        if(s[i+4]=='h'){
                            cout<<"apple";
                            i+=4;
                            if(i==(int)s.size()-1)cout<<endl;
                            continue;
                        }
        if(s[i]=='a'&&i<s.size()-4)
            if(s[i+1]=='p')
                if(s[i+2]=='p')
                    if(s[i+3]=='l')
                        if(s[i+4]=='e'){
                            cout<<"peach";
                            i+=4;
                            if(i==(int)s.size()-1)cout<<endl;
                            continue;
                        }
        cout<<s[i];
        
    }
}