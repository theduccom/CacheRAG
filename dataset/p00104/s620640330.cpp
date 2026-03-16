#include <functional>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <iomanip>
#include <utility>
#include <cstdlib>
#include <sstream>
#include <bitset>
#include <vector>
#include <cstdio>
#include <ctime>
#include <queue>
#include <deque>
#include <cmath>
#include <stack>
#include <list>
#include <map>
#include <set>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back


int main() {
    int h,w;
    while(cin>>h>>w){
        if(h==0 && w==0)break;
        
        char fie[200][200]={};
        rep(i,h) rep(j,w) cin>>fie[i][j];
        
        int y=0,x=0;
        bool visited[200][200]={};
        while(1){
            if(fie[y][x]=='.')break;
            else if(visited[y][x]){
                cout<<"LOOP"<<endl;
                goto next;
            }
            visited[y][x]=true;
            
            int here=fie[y][x];
            if(here=='>')x++;
            else if(here=='<')x--;
            else if(here=='^')y--;
            else if(here=='v')y++;
            else cout<<"error"<<endl;
            
        }
        cout<<x<<" "<<y<<endl;
        next:;
    }
    
    return 0;
}