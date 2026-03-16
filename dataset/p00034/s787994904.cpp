//Railway Lines
#include<bits/stdc++.h>
using namespace std;

int d[10];

int solve(double x){
  int i,sum=d[0];
  for(i=1; i<10; i++){
    if(x<=sum)break;
    sum+=d[i];
  }
  return i;
}

int main(){
  char t;
  int v1, v2;
  while(cin>>d[0]>>t){
    int len=d[0];
    for(int i=1; i<10; i++){cin>>d[i]>>t; len+=d[i];}
    cin>>v1>>t>>v2;
    double time=((double)len/(double)(v1+v2));
    cout<<solve(v1*time)<<endl;
  }
  return 0;
}