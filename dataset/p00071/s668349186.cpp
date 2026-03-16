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
 
 char arr[8][8];
 int dx[4]={1,0,-1,0};
 int dy[4]={0,-1,0,1};
 
 void dfs(int x,int y)
 {
   arr[x][y]='0';
   for(int step=1;step<=3;step++)
   {
     for(int i=0;i<4;i++)
     {
       if((x+step*dx[i]>=0)&&(x+step*dx[i]<8)&&(y+step*dy[i]>=0)&&(y+step*dy[i]<8))
       {
         int nx=x+step*dx[i];
         int ny=y+step*dy[i];
         if(arr[nx][ny]=='1')
         { 
           dfs(nx,ny);
           //cout<<nx<<" "<<ny<<endl;
         }                                                                    
       }        
     }        
   }     
   return;
 }
 
 int main()
 {
   int n;
   int count=1;
   cin>>n;
   while(n--)
   {
     string s;
     getline(cin,s);
     for(int i=0;i<8;i++)
     {
       cin>>s;
       for(int j=0;j<8;j++)
       {
         arr[i][j]=s[j];          
       }        
     }            
     int x,y;
     cin>>x>>y;
     dfs(y-1,x-1);
     cout<<"Data "<<count<<":"<<endl;
     for(int i=0;i<8;i++) 
     {
       for(int j=0;j<8;j++)
       {
         cout<<arr[i][j];        
       }        
       cout<<endl;
     }
     count++;
   }
   //while(1); 
   return 0;
 }

 
  