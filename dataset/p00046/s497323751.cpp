#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double mountain,high=0,low=10000;
    while(scanf("%lf",&mountain)!=EOF){
          //  cout<<mountain<<endl;
        if(mountain>high)high=mountain;
        if(mountain<low)low=mountain;
        //printf("%lf\n",high);
       // printf("%.1lf",high-low);
    }
    printf("%.1lf\n",high-low);
}