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
	int n;
	while(cin>>n&&n){
		int num[10]={},tmp;
		while(n--){cin>>tmp;num[tmp]++;}
		for(int i=0;i<10;i++){
			if(num[i])for(int j=0;j<num[i];j++)printf("*");
			else printf("-");
			printf("\n");
		}
	}
    return 0;
}