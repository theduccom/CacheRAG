#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
#include <map>
#include <queue>
#include <string>
using namespace std;

int n;

int main() {
	while(cin>>n){
		if(n==0)return 0;
		int ans=0;
		for(int i=1;i<12;i++)ans+=n/pow(5,i);
		cout<<ans<<endl;
	}
}