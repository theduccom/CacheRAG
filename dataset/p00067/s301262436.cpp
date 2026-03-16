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
 
 char arr[12][12];
 
 void dfs(int i,int j)
 {
   arr[i][j]='0';
   //cout<<i<<" "<<j<<endl;
   int dx[4]={0,1,0,-1};
   int dy[4]={1,0,-1,0};
   for(int s=0;s<4;s++)
   {
     if((i+dx[s])>=0&&(i+dx[s])<12&&(j+dy[s])>=0&&(j+dy[s])<12&&arr[i+dx[s]][j+dy[s]]=='1')
     {
       int nx=i+dx[s];
       int ny=j+dy[s];
       dfs(nx,ny);                                                          
     }        
   }
   return;     
 }
 
 int main()
 {
   string s;
   bool flag=false;
   while(cin>>s)
   {
     int count=0;
     for(int i=0;i<12;i++) arr[0][i]=s[i];
     for(int i=1;i<12;i++)
     {
       cin>>s;
       for(int j=0;j<12;j++) arr[i][j]=s[j];
     }      
     for(int i=0;i<12;i++)
     {
       for(int j=0;j<12;j++)
       {
         if(arr[i][j]=='1')
         { 
           //cout<<"start"<<i<<" "<<j<<endl;
           dfs(i,j);
           count++;
         }        
       }        
     }         
     cout<<count<<endl;
     getline(cin,s);
   }
   //while(1);
   return 0;
 }

 