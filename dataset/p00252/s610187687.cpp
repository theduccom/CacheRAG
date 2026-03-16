#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
 int A,B,C;
 scanf("%d%d%d",&A,&B,&C);
 if(C==1)printf("Open\n");
 else if(A==1&&B==1)printf("Open\n");
 else printf("Close\n");
 return 0;
}