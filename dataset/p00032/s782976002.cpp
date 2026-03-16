 
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
   int a,b,c;
   int arr[100005][3];
   int count1=0;
   int count2=0;
   int count=0;
   char temp,temp1;
   bool flag;
   while(cin>>a>>temp>>b>>temp1>>c)
   {
     if(a*a+b*b==c*c) count1++;
     else if(a==b) count2++;                              
   }
   cout<<count1<<endl;
   cout<<count2<<endl;  
   //while(1);     
   return 0;  
 }
 