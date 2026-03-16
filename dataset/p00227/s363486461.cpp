#include<iostream>
#include<set>
using namespace std;
 
int main()
{
 multiset< int,greater<int> > s;
 multiset<int>::iterator it;
 int n,m,p,i;
 int cost;
 while(cin>>n>>m,n||m){
  s.clear();
  for(i=0;i<n;i++){
   cin>>p;
   s.insert(p);
  }
  cost=0;
  i=0;
  for(it=s.begin();it!=s.end();it++){
   if(++i==m) i=0;
   else cost += *it;
  }
  cout<<cost<<endl;
 }
 return 0;
}