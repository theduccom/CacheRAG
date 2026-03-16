using namespace std;
#include <iostream>
#include <string>
#include <set>
#include <functional>
#include <vector>
#include <algorithm>
#include <stdio.h>
int bun[]={1,2,4,8,16,32,64,128,256,512};
int main()
{
	int x;
	while(cin>>x){
		for(int i=0;i<10;i++){
			if((x>>i)&1)printf(bun[i]>x/2?"%d\n":"%d ",bun[i]);
		}
	}
    return 0;
}