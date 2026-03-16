#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){

  vector<int>in(3);
	while(cin>>in[0]>>in[1]>>in[2],in[0]||in[1]||in[2]){
  	sort(in.begin(),in.end());	
	  double h=hypot(in[0],in[1])/2;
	
  	int n;
	  cin>>n;
	  rep(i,n){
		  int ans;
		  cin>>ans;
		  if(h<ans)cout<<"OK"<<endl;
		  else cout<<"NA"<<endl;
		}
	
	}
}