#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{
 vector<int> v(10);
 int n,i,m;
 while(cin>>n,n){
  fill(v.begin(),v.end(),0);
  for(i=0;i<n;i++){
   cin>>m;
   v[m]++;
  }
  for(i=0;i<10;i++){
   if(!v[i])cout<<"-";
   else for(n=0;n<v[i];n++)cout<<"*";
   cout<<endl;
  }
 }
 return 0;
}