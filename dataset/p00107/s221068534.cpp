#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<double> d(3);
  while(cin>>d[0]>>d[1]>>d[2],d[0]+d[1]+d[2]){
    int n;cin>>n;
    sort(d.begin(),d.end());
    double taikaku;
    taikaku=sqrt(((d[0]*d[0])+(d[1]*d[1])));
    //   cout<<d[0]<<" "<<d[1]<<endl;
    for(int i=0;i<n;i++){
      double a;cin>>a;
      a*=2;
      if(a>taikaku)
	cout<<"OK"<<endl;
      else
	cout<<"NA"<<endl;
    }
  }
  return 0;
}