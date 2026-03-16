#include<bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  cin.tie(0);     // cout と cin の同期を切る
  ios::sync_with_stdio(false);  /* cの stdioストリーム (printfとか) */

  int n;



  int c;

  while(1){
    cin>>n;

    int cnt[10]={ };

    if(n==0){
      break;
    }

    for(int i=0;i<n;i++){
      cin>>c;

      cnt[c]+=1;
    }

    for(int i=0;i<10;i++){
      if(cnt[i]==0){
	cout<<'-';
      }else{
	for(int j=0;j<cnt[i];j++){
	  cout<<'*';
	}
      }
      cout<<endl;
    }
  }      
  return 0;

}

