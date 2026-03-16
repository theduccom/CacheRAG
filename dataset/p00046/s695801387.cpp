#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(void)
{
   double yama;
   double ymax=0.0,ymin=1000005.0;
   double ans;
   while(scanf("%lf",&yama)!=EOF){
       ymax=max(ymax,yama);
       ymin=min(ymin,yama);
   }
   ans=ymax-ymin;
   printf("%.1f\n",ans);
   return 0;
}
