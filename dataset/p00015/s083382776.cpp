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
   int N;
   cin>>N;
   while(N--)
   {
     string a,b,sum;
     cin>>a>>b;
     bool flag=false;
     if(a.length()>80||b.length()>80) flag=true;
     else
     {
       int up=0;
       int i;
       for(int j=0;j<a.length()/2;j++) swap(a[j],a[a.length()-j-1]);
       for(int j=0;j<b.length()/2;j++) swap(b[j],b[b.length()-j-1]);
       for(i=0;i<a.length()&&i<b.length();i++)
       {
         sum+=(((a[i]-'0')+(b[i]-'0')+up)%10)+'0'; 
         if(a[i]-'0'+b[i]-'0'+up>=10) up=1;   
         else up=0;  
       }          
       while(i<a.length()) 
       {
         sum+=((a[i]-'0'+up)%10)+'0';
         if(a[i]-'0'+up>=10) up=1; 
         else up=0;         
         i++;          
       }
       while(i<b.length()) 
       {
         sum+=((b[i]-'0'+up)%10)+'0';
         if(b[i]-'0'+up>=10) up=1; 
         else up=0;
         i++;                   
       }
       if(up==1) sum+='1';
       if(sum.length()>80) flag=true;
     }
     if(flag) cout<<"overflow"<<endl;
     else
     {
       for(int i=sum.length()-1;i>=0;i--) cout<<sum[i];
       cout<<endl;    
     }
   }
   //while(1);      
   return 0;    
 }
 
 
 
 
 