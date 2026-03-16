#include <iostream>
#include <vector>
#include <map>
int main(){
  int n;
  std::map<int,long long> m;
  std::vector<int> v;
  //mlÛ¶vÛ¶
  long long a,b,c;
  //aÔbP¿cÊ
  bool f;
  while(std::cin>>n && n){
     m.clear();
     v.clear();
     f=true;
    for(;n;n--){
      std::cin>>a>>b>>c;
      if(!m[a])v.push_back(a);
      m[a] += b*c;
    }
    
    for(int i=0;i<v.size();i++){
      if(m[v[i]]>=1000000){
	f=false;
	std::cout<<v[i]<<std::endl;}
    }
    if(f)std::cout<<"NA"<<std::endl;
  }
  return 0;
}