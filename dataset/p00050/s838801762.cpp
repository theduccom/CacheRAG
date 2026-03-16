#include<iostream>
#include<vector>
#include<algorithm>
#include<cctype>
#include<utility>
#include<string>
#include<cmath>
#include<cstring>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 1000000000
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;




int main(){

    string s;
    getline(cin,s);
    
    for(int i = 0;i < s.length();i++){

        if(s[i] == 'a' && s.substr(i+1,4) == "pple"){
            s.replace(i,5,"peach");
        }else if(s[i] == 'p' && s.substr(i+1,4) == "each"){
            s.replace(i,5,"apple");
        }
    }
    cout << s << endl;



    return 0;

}
