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
   int arr[3]={1,0,0};
   char temp;
   char a,b;
   while(cin>>a>>temp>>b)
   {
     if(a=='A'&&b=='B') swap(arr[0],arr[1]);    
     else if(a=='A'&&b=='C') swap(arr[0],arr[2]);  
     else if(a=='B'&&b=='A') swap(arr[1],arr[0]);  
     else if(a=='B'&&b=='C') swap(arr[1],arr[2]);  
     else if(a=='C'&&b=='A') swap(arr[2],arr[0]);  
     else swap(arr[2],arr[1]);                    
   }
   for(int i=0;i<3;i++)
   {
     if(arr[i]==1)
     {
       if(i==0) cout<<"A"<<endl;
       else if(i==1) cout<<"B"<<endl;
       else cout<<"C"<<endl;
       break;             
     }        
   }
   //while(1);
   return 0;
 }

 