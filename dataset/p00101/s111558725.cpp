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
 
 using namespace std;
 
 int main()
 {
   int n;
   cin>>n;
   getchar();
   while(n--)
   {
     string s;
     getline(cin,s);
     while(s.find("Hoshino")!=string::npos)
     {
       s.replace(s.find("Hoshino"),7,"Hoshina");                                      
     }          
     cout<<s<<endl;
   }
   //while(1);
   return 0;
 }

 
 