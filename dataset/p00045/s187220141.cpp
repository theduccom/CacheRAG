#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int cost=0, sumcost=0, soldnum=0,sumsoldnum=0;
    int num=0;
    char t;
    while(cin >> cost >> t>>soldnum)
    {
        
        sumcost+= cost*soldnum;
        sumsoldnum += soldnum;
        num += 1;
    }
    printf("%d\n%d\n",sumcost,(int)( (float)sumsoldnum/(float)num +0.5) );

    return 0;
}