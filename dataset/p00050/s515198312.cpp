#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

string solve(string s){
    
    rep(i,s.size()-5+1){
        if(s.substr(i,5)=="apple")s.replace(i,5,"peach");
        else if(s.substr(i,5)=="peach")s.replace(i,5,"apple");
    }
    return s;
}



int main(){
    string s;
    getline(cin,s);
    
    cout<<solve(s)<<endl;
    
    return 0;
}