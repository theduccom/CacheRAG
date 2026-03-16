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
 
 int main()
 {
   double arr[20+2][2];
   int count=0;
   double x,y;
   char temp;
   while(cin>>x>>temp>>y)
   {
     if(x==100&&y==100) break;
     arr[count][0]=x;
     arr[count][1]=y;
     count++;                     
   } 
   double sum=0;
   int i=0;
   double a=sqrt(pow((arr[i][0]-arr[i+1][0]),2)+pow((arr[i][1]-arr[i+1][1]),2)); 
   double b=sqrt(pow((arr[i+1][0]-arr[i+2][0]),2)+pow((arr[i+1][1]-arr[i+2][1]),2));
   double c=sqrt(pow((arr[i][0]-arr[i+2][0]),2)+pow((arr[i][1]-arr[i+2][1]),2));
   double m=1.0/2*(a+b+c);
   sum+=sqrt(m*(m-a)*(m-b)*(m-c));
   //cout<<sum<<endl;
   x=arr[0][0];
   y=arr[0][1];
   for(i=2;i<count-1;i++)
   {
     double b1=sqrt(pow((arr[i][0]-x),2)+pow((arr[i][1]-y),2)); 
     double b2=sqrt(pow((arr[i+1][0]-x),2)+pow((arr[i+1][1]-y),2));
     double k=sqrt(pow((arr[i][0]-arr[i+1][0]),2)+pow((arr[i][1]-arr[i+1][1]),2)); 
     double z=1.0/2*(b1+b2+k);
     double S=sqrt(z*(z-b1)*(z-b2)*(z-k));
     //cout<<sum<<endl;
     sum+=S;         
   }
   printf("%.6lf\n",sum);
   //while(1);
   return 0; 
 }