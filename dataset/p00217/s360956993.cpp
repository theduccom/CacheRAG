#include<bits/stdc++.h>

#define endl '\n'

using namespace std;

typedef pair<int,int>P;

P p[100001];

int main(){

  cin.tie(0);     // cout と cin の同期を切る
  ios::sync_with_stdio(false);  /* cの stdioストリーム (printfとか)と*/

  int n;

  int a,b,c;

  while(1){
    cin>>n;

    if(n==0){
      break;
    }

    for(int i=0;i<n;i++){
      cin>>a>>b>>c;

      p[i]=make_pair(b+c,a);

    }


    sort(p,p+n);

    cout<<p[n-1].second<<" "<<p[n-1].first<<endl;

  }


  return 0;

}

