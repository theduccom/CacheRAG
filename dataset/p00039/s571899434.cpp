//49
#include<iostream>
#include<string>

using namespace std;

int main(){
  int rta[128];
  rta['Z']=0;
  rta['I']=1;
  rta['V']=5;
  rta['X']=10;
  rta['L']=50;
  rta['C']=100;
  rta['D']=500;
  rta['M']=1000;
  for(string s;cin>>s;){
    s+='Z';
    int ans=0;
    for(int i=0;i<s.size()-1;i++){
      if(rta[s[i]]>=rta[s[i+1]]){
	ans+=rta[s[i]];
      }else{
	ans-=rta[s[i]];
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}