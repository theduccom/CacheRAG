//include
//------------------------------------------
#include <bits/stdc++.h> // only for GCC

using namespace std;

//typedef
//------------------------------------------
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef pair<int, int> pii;
typedef long long ll;
typedef unsigned long long ull;

//container util
//------------------------------------------
#define all(a)  (a).begin(),(a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define pb push_back
#define mp make_pair

//repetition
//------------------------------------------
#define loop(i,a,b) for(ull i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)
#define iter(i,c) for(auto i=(c).begin(); i!=(c).end(); ++i)
#define riter(i,c) for(auto i=(c).rbegin(); i!=(c).rend(); ++i)

//constant
//--------------------------------------------
const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

// output vector
// ------------------------------------------
namespace std {
    template<typename T>ostream&operator<<(ostream&os, vector<T>const&v){
        iter(it,v) os<<*it<<(it+1==v.end()?"":",");
        return os;
    }
    template<typename T, typename U>ostream&operator<<(ostream&os,const pair<T,U>&p){
        return os << "[" << p.dirst << "," << p.second << "]";
    }
}

//clear memory
// ------------------------------------------
#define clr(a,i) memset((a), (i) ,sizeof(a))
vb pn(999984,1);
void prime_number(ull n){
   pn[0]=false;pn[1]=false;
   loop(i,2,n){
      if(!pn[i]) continue;
      for(ull j=i*i;j<=n;j+=i){
         pn[j]=false;
      }
   }
}

int main(){
   int n;
   prime_number(999983);
   while(cin >> n && n){
      int ans=0;
      for(int i=2;i<=n/2;i++){
         if(pn[i]==true&&pn[n-i]==true){
            ans++;
            //cout << i << " " << n-i << endl;
         }
      }
      cout << ans << endl;
   }
}