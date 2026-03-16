 #include<iostream>
 #include<stdio.h>
 #include<cstdlib>
 #include<cstdio>
 #include<string>
 #include<math.h>
 #include<iomanip>
 #include<algorithm>
 #include<string.h>
 #include<cctype>
 #include<map>
 #include<set>
 #include<vector>
 #include<sstream>
 #include<stack>
 #include<queue>
 #include<deque>
 #include<functional>
 #include<utility>
 #include<list>
 
 using namespace std;
 
 bool isLeap(int year)
 {
   if(year%4!=0) return false;
   else
   {
     if(year%100==0)
     {
       if(year%400==0) return true;
       else return false;               
     }
     else return true;    
   }     
 }
 
 int main()
 {
   int start,end;
   bool flag=false;
   while(cin>>start>>end&&(start||end))
   {
     if(flag) cout<<endl;
     int count=0;
     for(int i=start;i<=end;i++)
     {
       if(isLeap(i))
       {
         cout<<i<<endl; 
         count++;
       }        
     }                       
     if(!count) cout<<"NA"<<endl;
     //cout<<endl; 
     flag=true;            
   }
   //while(1);
   return 0;
 }

 