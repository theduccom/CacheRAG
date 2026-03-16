using namespace std;
#include <iostream>
#include <string>
#include <set>
#include <functional>
#include <vector>
#include <algorithm>
#include <stdio.h>
typedef pair<int,int> pa;
int main()
{
	int n;
	while(cin>>n&&n){
		pa p[10000]={};//d,p
		for(int i=0;i<n;i++){
			int d1,d2;cin>>p[i].second>>d1>>d2;
			p[i].first=d1+d2;
		}
		sort(p,p+n,greater<pa>());
		cout<<p[0].second<<" "<<p[0].first<<endl;
	}
	return 0;
}