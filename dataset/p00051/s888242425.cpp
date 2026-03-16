//Differential ?
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll into(int s[8]){
  ll sum=0;
  for(int i=0; i<8; i++){
    sum=sum*10+s[i];
  }
  return sum;
}

int main(){
  int n;
  cin>>n;
  while(n--){
    long long a, b;
    int s[8];
    for(int i=0; i<8; i++)scanf("%1d", &s[i]);
    sort(s, s+8);
    a=into(s);
    sort(s, s+8, greater<int>());
    b=into(s);
    cout<<b-a<<endl;
  }
  return 0;
}