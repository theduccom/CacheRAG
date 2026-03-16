 #include<iostream>
 #include<stdio.h>
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
 
 using namespace std;

 int main()
 {
   string s;
   int count=0;
   while(cin>>s)
   {
     bool flag=true;
     for(int i=0;i<s.length()/2;i++) 
     {
       if(s[i]!=s[s.length()-1-i])
       {
         flag=false;
         break;                           
       }          
     }         
     if(flag) count++;    
   }
   cout<<count<<endl;
   //while(1);
   return 0;
 }

 