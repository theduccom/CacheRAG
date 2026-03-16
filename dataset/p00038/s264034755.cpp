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

int main(){
   int n;
    char c;
    while(cin>>n){
      map<int,int> t;
      int two=0,three=0,four=0,strate=0;
      t[n]++;
      rep(i,4){
         cin >> c >> n;
         t[n]++;
      }
      rep(i,14){
         if(t[i]==2) two++;
         if(t[i]==3) three++;
         if(t[i]==4) four++;
         if(t[i]==1&&t[i+1]==1&&t[i+2]==1&&t[i+3]==1&&t[i+4]==1) strate++;
      }
      if(t[1]==1&&t[10]==1&&t[11]==1&&t[12]==1&&t[13]==1) strate++;
      if(two==1){
         if(three==1) cout << "full house" << endl;
         else cout << "one pair" << endl;
      }else if(two==2) cout << "two pair" << endl;
      else if(three==1) cout << "three card" << endl;
      else if(strate==1) cout << "straight" << endl;
      else if(four==1) cout << "four card" << endl;
      else cout << "null" << endl;
    }
}