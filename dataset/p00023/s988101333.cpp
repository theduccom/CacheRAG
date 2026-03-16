#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <complex>
#include <cstdio>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<int(b); i++)
#define rep(i,b) loop(i,0,b)

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
typedef complex<double> vec;

int main(){
    int n; cin >> n;
    rep(i,n){
        double xa,ya,ra,xb,yb,rb;
        cin>> xa>>ya>>ra>>xb>>yb>>rb;
        double dx=xa-xb, dy=ya-yb;
        double d=sqrt(dx*dx+dy*dy);
        int ans;
        if(d>ra+rb){
            ans=0;
        }else if(d+ra<rb){
            ans=-2;
        }else if(d+rb<ra){
            ans=2;
        }else{
            ans=1;
        }
        cout << ans << endl;
    }
}