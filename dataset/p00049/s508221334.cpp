#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
string str;
int K,TB=0,TA=0,Tab=0,TM=0;
char ch,chc;
while(scanf("%d,%c%c",&K,&ch,&chc)!=EOF)
{
	
	if(ch=='A'){if(chc=='B')Tab++;else TA++;}
else if(ch=='B')TB++;
//else if(str=="AB")Tab++;
else if(ch=='O')TM++;
}
printf("%d\n%d\n%d\n%d\n",TA,TB,Tab,TM);

return 0;
}