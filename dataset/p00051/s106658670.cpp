#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<map>
#include<sstream>
#include<algorithm>
using namespace std;

int main(){
   vector<int> Num;
   int Max,Min;
   int n,i,l,num,z;
   
   cin>>n;
   for(i=0;i<n;i++){
      cin>>num;
      
      while(num>0){
         z=num-(num/10*10);
         Num.push_back(z);
         num/=10;
      }
      sort(Num.rbegin(),Num.rend());
      z=1;
      for(l=0;l<(int)Num.size()-1;l++){
         z*=10;
      }
      Max=0;Min=0;
      for(l=0;l<(int)Num.size();l++){
         Max+=Num[l]*z;
         z/=10;
      }
      sort(Num.begin(),Num.end());
      z=1;
      for(l=0;l<(int)Num.size()-1;l++){
         z*=10;
      }
      for(l=0;l<(int)Num.size();l++){
         Min+=Num[l]*z;
         z/=10;
      }
      cout<<Max-Min<<endl;
      Num.clear();
   }
   return 0;
}