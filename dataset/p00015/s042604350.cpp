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
#define MAX  999999
int main (){
    int n; cin >> n;
    rep(k,n){
        string s; string s2;
        cin >> s >> s2;
        vi v(100,0);
        if(s.length()>80 || s2.length() > 80){
            cout << "overflow" << endl;
        }else{
            vi v(100,0); vi v2(100,0);
            vi ans(100,0);
            if(s.length()<s2.length()) swap(s,s2);
            rep(i,s.length())
                v[i] = (int)s[i]-48;
            rep(i,s2.length())
                v2[i] = (int)s2[i]-48;
            int num = (int)max(s2.length(),s.length());
            reverse(v.begin(), v.begin()+s.length());
            reverse(v2.begin(),v2.begin()+ s2.length());
            int ansize = 0;
            rep(i,num){
                ansize++;
                ans[i] += v[i]+v2[i];
                if(ans[i] >= 10){
                    ans[i]-=10;
                    ans[i+1]+=1;
                    if(i == num-1)
                        ansize++;
                }
            }
            if(ansize >80)
                cout <<"overflow" << endl;
            else{
            reverse(ans.begin(), ans.begin()+ansize);
            rep(i,ansize)
            cout << ans[i];
            cout << endl;
            }
        }
        
        }
        return 0;
}