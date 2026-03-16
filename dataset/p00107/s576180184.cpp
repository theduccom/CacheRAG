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
   int A,B,C;
   while(cin>>A>>B>>C)
   {
     if(A==0&&B==0&&C==0) break;
     int num;
     int a=A*A+B*B;
     int b=A*A+C*C;
     int c=B*B+C*C;
     double kk=min(a,min(b,c));
     kk=sqrt(1.0/4*kk); 
     cin>>num;
     while(num--)      
     {
       int n;
       cin>>n;
       if(n>kk) cout<<"OK"<<endl;
       else cout<<"NA"<<endl;                  
     }             
   }
   //while(1);
   return 0;
 }