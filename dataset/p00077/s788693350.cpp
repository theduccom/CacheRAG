//include
//------------------------------------------
#include <bits/stdc++.h>

using namespace std;

//typedef
//------------------------------------------
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vb> vbb;
typedef pair<int, int> pii;
typedef long long ll;
typedef unsigned long long ull;

//container util
//------------------------------------------
#define all(a)  (a).begin(),(a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define pb push_back
#define mp make_pair
#define iter(i,c) for(auto i=(c).begin(); i!=(c).end(); ++i)

//repetition
//------------------------------------------
#define loop(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)  loop(i,0,n)

//constant
//--------------------------------------------
const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

// output vector
// ------------------------------------------
namespace std {
    template<typename T> ostream & operator<<(ostream& os, vector<T> const& v){
        for(auto it=v.begin(); it!=v.end(); ++it){
            os << *it << (it+1==v.end() ? "" : ",");
        }
        return os;
    }
}

//clear memory
#define clr(a) memset((a), 0 ,sizeof(a))

int lcm(int a,int b){
   return a*b/__gcd(a,b);
}
 
vb pn((int)1e4+10); 
void prime_number(int n){
   fill(all(pn),true);
   pn[0]=false;pn[1]=false;
   loop(i,2,n/2+1){
      if(!pn[i]) continue;
      for(int j=2;i*j<=n;j++){
         pn[i*j]=false;
      }
   }
}

int main(){
   string s;
   while(cin>>s){
      rep(i,s.size()){
         if(s[i]=='@'){
            i++;
            rep(j,s[i]-'0') cout << s[i+1];
            i++;
         }
         else cout << s[i];
      }
      cout << endl;
   }
}