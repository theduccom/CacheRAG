#include<iostream>
using namespace std;
 
int main()
{
 string grade;
 int n,i,pm,pe,pj;
 while(cin>>n,n){
  for(i=0;i<n;i++){
   cin>>pm>>pe>>pj;
   if(pm==100||pe==100||pj==100) grade="A";
   else if((pm+pe)/2 >= 90) grade="A";
   else if((pm+pe+pj)/3 >= 80) grade="A";
   else if((pm+pe+pj)/3 >= 70) grade="B";
   else if((pm+pe+pj)/3 >= 50 && (pm>=80||pe>=80)) grade="B";
   else grade="C";
   cout<<grade<<endl;
  }
 }
 return 0;
}