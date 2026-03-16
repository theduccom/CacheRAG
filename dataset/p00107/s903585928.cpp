#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
  int x,y,z,n,tmp,t;
  for(;;){
    cin>>x;
    cin>>y;
    cin>>z;
    if(x==0&&y==0&&z==0)
      break;
    cin>>n;
    vector<int> r;
    for(int i=0;i<n;i++){
      cin>>tmp;
      r.push_back(tmp*tmp*4);
    }
    t=min(min(x*x+y*y,y*y+z*z),x*x+z*z);
    for(vector<int>::iterator i=r.begin();i<r.end();i++){
      if(*i>t)
	cout<<"OK"<<endl;
      else
	cout<<"NA"<<endl;
    }
  }
  return 0;
}