#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
double EPS=1e-10;
int INF=1e9;
string sum(string a,string b){
      string res="";
      reverse(ALL(a));
      reverse(ALL(b));
      if(a.size()>b.size())swap(a,b);
      int k=0;
      REP(i,a.size()){
            int t=a[i]-'0'+b[i]-'0'+k;
            res+=(char)(t%10+'0');
            k=t/10;
      }
      for(int i=a.size();i<b.size();i++){
            int t=b[i]-'0'+k;
            res+=(char)(t%10+'0');
            k=t/10;
      }
      while(k>0){
            res+=(char)(k%10+'0');
            k/=10;
      }
      reverse(ALL(res));
      return res;
}
int main(){
      int n;
      cin>>n;
      while(n--){
            string a,b;
            cin>>a>>b;
            string ans=sum(a,b);
            if(ans.size()>80){
                  cout<<"overflow"<<endl;
            }else{
                  cout<<ans<<endl;
            }
      }
}