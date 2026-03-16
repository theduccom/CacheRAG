 
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
 
 using namespace std;
  
 int main()
 {
   string a,b;
   getline(cin,a);
     for(int i=0;i<a.length();i++)
     { 
       if(a[i]>='a'&&a[i]<='z') b+=('A'+(a[i]-'a'));
       else b+=a[i];
     }
     cout<<b<<endl;
   //while(1);      
   return 0;    
 }