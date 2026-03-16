#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#include<set>
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
typedef pair<int, int>PA;
using namespace std;
#define MAX 1000
int main(){
        string s;
    while(cin>>s){
            string temp;
            rep(i,s.size()){
                if(s[i]=='@'){
                    rep(j,s[i+1]-48)
                    temp.push_back(s[i+2]);
                    i+=2;
                }
                else
                    temp.push_back(s[i]);
                
                    }
            cout<<temp<<endl;
        }
}