#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<map>
#include<algorithm>
#include<sstream>
using namespace std;

string repl(string,string,int);

int main(){
   int flag=0;
   int z;
   string str,str2="";
   stringstream ss;
   string app = "apple",pea = "peach";
   
   getline(cin,str);
   ss<<str;
   
   for(;;){
      ss>>str;
      if(str==str2) break;
      str2=str;
      
      if(str.find(app)!=string::npos){
         z = (int)str.find(app);
         str = repl(str,pea,z);
      }
      else if(str.find(pea)!=string::npos){
         z = (int)str.find(pea);
         str = repl(str,app,z);
      }
      
      if(flag==0) flag++;
      else cout<<" ";
      cout<<str;
      str2=str;
   }
   puts("");
   return 0;
}

string repl(string str,string aft,int z){
   int i,l=0;
   
   for(i=z;i<z+5;i++){
      str[i]=aft[l];
      l++;
   }
   return str;
}