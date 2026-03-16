#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
  long long int ans = 1;
  int n;
  while(cin>>n,n){
  ans = 1;
  int t , f;
    t = f = 0;
  for(int i = 1 ; i <= n ; i ++){
    int use = i;
    bool how = false;
    while(use%2==0){
      use/=2;
      t++;
      how = true;
    }
    while(use%5==0){
      use/=5;
      f++;
      how = true;
    }
    /*
    if(i%2==0){t++;
    }
    if(i%5==0){f++;
    }
    //cout<<f<<" "<<t<<" "<<i<<endl;
    */
  }
  cout<<min(t,f)<<endl;
  }
}