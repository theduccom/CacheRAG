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
#define MAX 1e7
int sx[] = {0,0,-1,1};
int sy[] = {1,-1,0,0};
int my[] = {0,0,1,1,1,-1,-1,-1};
int mx[] = {1,-1,0,1,-1,0,1,-1};
int lx[] = {0,0,0,0,1,1,1,2,-1,-1,-1,-2};
int ly[] = {1,-1,2,-2,0,1,-1,0,0,-1,1,0};
int  main(){
    
    vvi v(12,vi(12,0));
    vi x(100,0); vi y(100,0); vi ink(100,0);
    int i =0; char c,d;
    while(cin >> x[i] >>c>>y[i] >>d >> ink[i]){
        v[y[i]][x[i]]+=1;
        if(ink[i] == 1){
            rep(j,4){
                int tx =x[i]+sx[j]; int ty = y[i]+sy[j];
                if(0<=tx && tx<10 && 0<=ty && ty<10)
                    v[ty][tx]+=1;
            }
        }else if(ink[i] == 2){
            rep(j,8){
                int tx =x[i]+mx[j]; int ty = y[i]+my[j];
                if(0<=tx && tx<10 && 0<=ty && ty<10)
                    v[ty][tx]+=1;
                }
        }else if(ink[i] == 3){
                rep(j,12){
                    int tx =x[i]+lx[j]; int ty = y[i]+ly[j];
                    if(0<=tx && tx<10 && 0<=ty && ty<10)
                        v[ty][tx]+=1;
                }
        }
        i++;
    }
        int ans1 = -INF; int ans2 = 0;
        rep(i,10) rep(j,10){
            ans1 = max(ans1,v[i][j]);
            if(v[i][j]  == 0)
                ans2++;
        }
    cout << ans2<< endl;
    cout << ans1<< endl;
        
    return 0;
}