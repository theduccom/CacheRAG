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
   while(cin>>s)
   {
     string result="";
     for(int i=0;i<s.length();i++)
     {
       if(s[i]=='@')
       {
         int num=(s[i+1]-'0');
         char kk=s[i+2];
         while(num--) result+=kk;
         i=i+2;               
       }        
       else result+=s[i];
     }     
     cout<<result<<endl;       
   }
   //while(1);
   return 0; 
 }