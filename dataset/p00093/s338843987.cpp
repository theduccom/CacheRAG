#include <bits/stdc++.h>
using namespace std;

int main(){

  int a,b,c=0;

  while(true){
    
    cin>>a>>b;
    if(a==0&&b==0) break;
    if(c!=0)cout<<endl;


    vector<int> leaps;

    if(a%4!=0)
      a = 4 - a%4 + a;

    for(int i=a;i<=b;i+=4){
      if(i%400==0){
        cout<<i<<endl;
        leaps.emplace_back(i);
      }else if(i%100==0){
        continue;
      }else{
        cout<<i<<endl;
        leaps.emplace_back(i);
      }
    }

next : 

    if(leaps.size()==0) cout<<"NA"<<endl;
    ++c;

  }

  return EXIT_SUCCESS;
}