#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define FOR(i, s, n) for(int i = s; i <= (int)n; ++i)
#define per(i, n) for(int i = n; i > 0; i--)
#define ROF(i, s, n) for(int i = s; i >= (int)n; i--)
#define FORIT(i, A) for (auto i : A)
#define PRINT(x) cout << (x) << "\n"
#define MP make_pair
#define PB push_back
#define EACH(i, n) for (__typeof((n).begin()) i = (n).begin(); i != (n).end(); ++i)
#define SZ(a) int((a).size())
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define CLR(a) memset((a), 0 ,sizeof(a))
#define NCLR(a) memset((a), -1 ,sizeof(a))
#define int long long
static const int dx[] = { -1, 0, 1, 0 };
static const int dy[] = { 0, -1, 0, 1 };

char feld[10][10];
int n;

void boms(int x,int y){
     if(feld[y][x]=='0')return;
     feld[y][x]='0';
     for(int i=1;i<=3;++i){
        rep(j,4){
            int nx=x+(dx[j]*i);
            int ny=y+(dy[j]*i);
            if(nx>8||nx<=0||ny>8||ny<=0)continue;
            boms(nx,ny);
        }
     }
}

signed main(){
    cin>>n;
    for(int i=1;i<=n;++i){
        for(int y=1;y<=8;++y){
            for(int x=1;x<=8;++x){
                cin>>feld[y][x];
            }
        }
        int a,b;
        cin>>a>>b;
        boms(a,b);
        cout<<"Data "<<i<<":"<<endl;
        for(int y=1;y<=8;++y){
            for(int x=1;x<=8;++x)cout<<feld[y][x];
            cout<<"\n";
        }
    }
}