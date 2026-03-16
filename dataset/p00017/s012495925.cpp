#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<cstring>
#include<utility>
#include<set>
#include<stack>
#include<complex>
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
#define CC puts("-------ok--------");
#define all(in) in.begin(), in.end()
#define bv vector<bool>
using namespace std;
typedef pair<int, int>PI;
using namespace std;
#define MAX  999999
int main(){
    string s;
    while(getline(cin,s)){
    rep(i,26){
        rep(j,s.size()){
            if(s[j]>='a'&&s[j] <='z')
                (s[j] == 'z') ? s[j] ='a' : s[j] = s[j]+1;
        }
        
        if(s.find("this")!= string::npos){cout<<s<< endl;}
        else if(s.find("that")!= string::npos){cout<<s<< endl;}
        else if(s.find("the")!= string::npos){cout<<s<< endl;}
        }
    }
    return 0;
}