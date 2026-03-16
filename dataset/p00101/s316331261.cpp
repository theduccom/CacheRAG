#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<sstream>
#include<map>
#include<algorithm>
using namespace std;

string change(string,int);

int main(){
   int n,i;
   int pl;
   string str,z;
   string::size_type ind;
   
   cin>>n;
   getline(cin,z);
   for(i=0;i<n;i++){
      getline(cin,str);
      
      ind=str.find("Hoshino");
      while(ind!=string::npos){
         pl = (int)str.find("Hoshino");
         str = change(str,pl);
         ind = str.find("Hoshino");
      }
      cout<<str<<endl;
   }
   return 0;
}

string change(string str,int pl){
   int i,l=0;
   string name = "Hoshina";
   
   for(i=pl;i<pl+7;i++){
      str[i]=name[l];
      l++;
   }
   return str;
}