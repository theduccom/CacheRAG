#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int n;
  double xa,ya,ra,xb,yb,rb;
  double d;
  int ans;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>xa>>ya>>ra>>xb>>yb>>rb;
    d=sqrt(pow(xa-xb,2.0)+pow(ya-yb,2.0));
    if(ra>rb){
      if(ra>rb+d){
	ans = 2;
      }
      else if(ra<=rb+d&&ra+rb>=d){
	ans = 1;
      }
      else if(ra+rb<d){
	ans = 0;
      }
    }
    else if(ra<=rb){
      if(rb>ra+d){
	ans=-2;
      }
      else if(rb<=ra+d&&ra+rb>=d){
	ans =1;
      }
      else if(ra+rb<d){
	ans=0;
      }
    }
    cout<<ans<<"\n";
  }
    return 0;
}