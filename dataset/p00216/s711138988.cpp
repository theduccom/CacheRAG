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
	while(cin>>n&&n!=-1){
		int ans=1150;
		if(10<n)ans+=min(10,(n-10))*125;
		if(20<n)ans+=min(10,(n-20))*140;
		if(30<n)ans+=(n-30)*160;
		cout<<4280-ans<<endl;
	}
    return 0;
}