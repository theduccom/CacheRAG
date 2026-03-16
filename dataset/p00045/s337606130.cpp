#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(void)
{
   int n,m;
   int i=0;
   int sum=0;
   double ave=0;
   while(scanf("%d,%d",&n,&m)!=EOF){
       sum+=n*m;
       ave+=m;
       i++;
   }
   int mean;
   mean=(int)(ave/i+0.5);
   cout<<sum<<endl;
   cout<<mean<<endl;
   return 0;
}
