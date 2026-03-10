#include <bits/stdc++.h>
//#include <rng_58>
//#include <chokudai>
//#include <tourist>
using namespace std;

// Macro and Macro Functions
#define rep(a, b) for(int a = 0; a < b; ++a)
#define REP(a, b, c) for(int a = b; a < c; ++a)
#define drep(a, b, c) for(int a=0,b=0;b<c?:(b=0,++a<c);++b)
#define int long long
#define between(n,_min,_max) if(_min<=n&&n<=_max)
#define SORT(a) sort(ALL(a))
#define RSORT(a) sort(RALL(a))
#define REVERSE(a) reverse(ALL(a))
#define MOD 1000000007
#define ALL(a) a.begin(),a.end()
#define RALL(a) a.rbegin(),a.rend()
#define ALLIN(a) rep(nanika,a.size()) cin>>a[nanika]
#define ALLINDE(a) rep(kyawa,a.size()){cin>>a[kyawa]; --a[kyawa];}
#define YN(a) do{if(a) cout<<"YES"; else cout<<"NO";}while(0)
#define Yn(a) do{if(a) cout<<"Yes"; else cout<<"No";}while(0)
#define yn(a) do{if(a) cout<<"yes"; else cout<<"no";}while(0)
#define spa " "
#define dspa "  "
#define ctoi(c) (c)-'0'
#define altoi(a) (a)-'a'
#define fi first
#define se second
#define dvec(type,name,row,column,value) vector<vector<type>> name(row,vector<type>(column,value))
 
// List of using
using ll   = signed long long;
using ull  = unsigned long long;
using pint = pair<int,  int>;
using pong = pair<long, long>;
using tint = tuple<int,  int,  int>;
using tong = tuple<long, long, long>;
using vint = vector<int>;
using vll  = vector<long long>;
using vbol = vector<bool>;
using vstr = vector<string>;
using vull = vector<unsigned long long>;
using dvin = vector<vector<int>>;
using dvbo = vector<vector<bool>>;
using mint = map<int,int>;
 
// Common Variable
bool DEBUG=false;
long long INF=2000000000;

void print(){
  cout<<'\n';
}

template<class HEAD,class... TAIL>
void print(HEAD&& head,TAIL&&... tail){
  cout<<head<<spa;
  print(forward<TAIL>(tail)...);
}

void scan(){}

template<class HEAD,class... TAIL>
void scan(HEAD&& head,TAIL&&... tail){
  cin>>head;
  scan(forward<TAIL>(tail)...);
}

template<typename t>
void print(vector<t> &v){
  rep(i,v.size()){
    cout<<v[i]<<spa;
  }
  cout<<endl;
}

template<typename t, typename u>
void print(vector<pair<t,u>> &v){
  rep(i,v.size()){
    cout<<i<<" : "<<v[i].first<<" "<<v[i].second<<endl;
  }
}

int RepeatSquaring(int N, int P, int M){
  if(P==0) return 1;
  if(P%2==0){
    int t = RepeatSquaring(N, P/2, M);
    return t*t % M;
  }
  return N * RepeatSquaring(N, P-1, M);
}
//--------------------------------
// Template Place
struct edge{int to; ull cost;};
 
class uc_graph{
  public :
    int size;
    vector<vector<edge>> graph;
    vector<ull> dis;
    vector<int> prev;
    vector<bool> used;
    int min_prim;
    
    void set(int n){
      size=n;
      graph.resize(size);
      dis.resize(size);
      prev.resize(size);
      used.resize(size);
    }
    void dijkstra(int s){
      priority_queue<pair<ull,int>,vector<pair<ull,int>>,greater<pair<ull,int>>> que;
      fill(dis.begin(),dis.end(),INF);
      fill(prev.begin(),prev.end(),-1);
      dis[s]=0;
      que.push(pair<ull,int>(0,s));
      
      while(!que.empty()){
        pair<ull,int> p=que.top();
        que.pop();
        int v=p.second;
        if(dis[v]<p.first) continue;
        rep(i,graph[v].size()){
          edge e=graph[v][i];
          if(dis[e.to]>dis[v]+e.cost){
            dis[e.to]=dis[v]+e.cost;
            que.push(pair<ull,int>(dis[e.to],e.to));
            prev[e.to]=v;
          }
        }
      }
    }
    void prim(void){
      priority_queue<pint,vector<pint>,greater<pint>> que;
      fill(ALL(used),false);
      que.push(pint(0,0));
      min_prim=0;
      while(!que.empty()){
        int c=que.top().first,v=que.top().second;
        que.pop();
        if(used[v]) continue;
        used[v]=true;
        min_prim+=c;
        rep(i,graph[v].size()){
          que.push(pint(graph[v][i].cost,graph[v][i].to));
        }
      }
    }
    vint get_path(int t){
      vint path;
      for(;t!=-1;t=prev[t])
        path.push_back(t);
      reverse(path.begin(),path.end());
      return path;
    }
};
//--------------------------------
// int dx[]={ 1, 0,-1, 0};
// int dy[]={ 0,-1, 0, 1};

signed main(){
  REP(i,1,10){
    REP(j,1,10){
      cout<<i<<"x"<<j<<"="<<i*j<<endl;
    }
  }
  return 0;
}

