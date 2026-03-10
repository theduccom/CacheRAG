#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
#include<stack>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<list>
using namespace std;
int main ()
{
    for(int i=1;i<=9;i++)
        for(int j=1;j<=9;j++)
    {
        printf("%dx%d=%d\n",i,j,i*j);
    }
    return 0;
}


