using namespace std;
#include <iostream>
#include <string>
#include <set>
#include <functional>
#include <vector>
#include <algorithm>
#include <stdio.h>
int main()
{
	int a,b,c;
	char t;
	int cho=0,hishi=0;
	while(cin>>a>>t>>b>>t>>c){
		if(a*a+b*b==c*c)cho++;
		if(a==b)hishi++;
	}
	printf("%d\n%d\n",cho,hishi);
    return 0;
}