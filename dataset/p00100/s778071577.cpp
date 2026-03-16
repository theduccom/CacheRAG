#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
  int n,f;
  long long a,b,c;
  while(std::cin>>n,n){
		map<int,long long> m;
		vector<int> v;
		f=1;
    for(;n;n--){
      std::cin>>a>>b>>c;
      if(!m[a])v.push_back(a);
      m[a] += b*c;
    }
    
    for(int i=0;i<v.size();i++){
      if(m[v[i]]>=1000000){
				f=0;
				cout<<v[i]<<endl;}
    }
    if(f)cout<<"NA"<<endl;
  }
  return 0;
}