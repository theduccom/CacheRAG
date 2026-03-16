#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define it ::iterator
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double ESP=1e-10;
using namespace std;
int main(){
  int n;
  while(cin>>n,n){
    int co2=0,co5=0;
    loop(i,1,n+1){
      int tmp=i;
      while(tmp%5==0){
	co5++;
	tmp/=5;
      }
      while(tmp%2==0){
	co2++;
	tmp/=2;
      }
    }
    cout<<min(co2,co5)<<endl;
  }
}