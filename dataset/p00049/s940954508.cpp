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
   int num;
   char temp;
   map<string,int> mm;
   string type;
   while(cin>>num>>temp>>type)
   {
     mm[type]++;                             
   }
   cout<<mm["A"]<<endl;
   cout<<mm["B"]<<endl;
   cout<<mm["AB"]<<endl;
   cout<<mm["O"]<<endl;
   //while(1);
   return 0;
 }

 
 