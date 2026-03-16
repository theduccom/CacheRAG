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
   int ans;
   string s;
   while(getline(cin,s)){
      ans=0;
      rep(i,s.size()-1){
         if(s[i]=='M') ans+=1000;
         else if(s[i]=='D'){
            if(s[i+1]=='M') ans-=500;
            else ans+=500;
         } else if(s[i]=='C'){
            if(s[i+1]!='D'&&s[i+1]!='M') ans+=100;
            else ans-=100;
         }else if(s[i]=='L'){
            if(s[i+1]!='C'&&s[i+1]!='D'&&s[i+1]!='M') ans+=50;
            else ans-=50;
         }else if(s[i]=='X'){
            if(s[i+1]=='X'||s[i+1]=='V'||s[i+1]=='I') ans+=10;
            else ans-=10;
         }else if(s[i]=='V'){
            if(s[i+1]=='I') ans+=5;
            else ans-=5;
         }else if(s[i]=='I'){
            if(s[i+1]=='I') ans+=1;
            else ans-=1;
         }
      }
      if(s[s.size()-1]=='M') ans+=1000;
      if(s[s.size()-1]=='D') ans+=500;
      if(s[s.size()-1]=='C') ans+=100;
      if(s[s.size()-1]=='L') ans+=50;
      if(s[s.size()-1]=='X') ans+=10;
      if(s[s.size()-1]=='V') ans+=5;
      if(s[s.size()-1]=='I') ans+=1;
      cout << ans << endl;
   }
}