#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
 
using namespace std;
 
 
int main(void)
{
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a==1 &&b==1) puts("Open");
	else if(c==1) puts("Open");
	else puts("Close");

    return 0;
}