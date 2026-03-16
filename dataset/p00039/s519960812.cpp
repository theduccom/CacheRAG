 
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
   string s;
   map<char,int> mymap;
   mymap['I']=1;
   mymap['V']=5;
   mymap['X']=10;
   mymap['L']=50;
   mymap['C']=100;
   mymap['D']=500;
   mymap['M']=1000;
   while(cin>>s)
   {
     int sum=0;
     for(int i=0;i<s.length();i++)
     {
       if(i+1<s.length()&&mymap[s[i]]<mymap[s[i+1]]) sum-=mymap[s[i]];
       else sum+=mymap[s[i]];  
     }
     cout<<sum<<endl;
   }
   //while(1);
   return 0;
 }