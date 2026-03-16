#include<iostream>
#include<map>
using namespace std;
 
int main()
{
 map< int,int, greater<int> > m;
 int n,i,p,d1,d2;
 while(cin>>n,n){
  m.clear();
  for(i=0;i<n;i++){
   cin>>p>>d1>>d2;
   m[d1+d2] = p;
  }
  cout<<(*m.begin()).second<<" "<<(*m.begin()).first<<endl;
 }
 return 0;
}