#include<bits/stdc++.h>
#define FOR(i,n) for(int i=0;i<n;i++)
#define SFOR(i,a,b) for(int i=a;i<b;i++)
#define elif(a) else if(a)
#define INF INT_MAX
#define F first
#define S second
#define endl '\n'
using namespace std;
typedef long long ll;
typedef pair<int,int>P;
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int a,b,c;
  cin>>a>>b>>c;
  if(a==1 && b==1 || c==1){
    cout<<"Open"<<endl;
  }else{
    cout<<"Close"<<endl;
  }
  return 0;
}


