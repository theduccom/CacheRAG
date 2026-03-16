#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
#include <map>
using namespace std;
int main(){

	int n,m;
	while(cin>>n>>m,n!=0||m!=0){
		vector<int> a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(),a.end());
		int s=0;
		int k=1;
		for(int i=n-1;i>=0;i--){
			if(k!=m){
				s+=a[i];
				k++;
			}
			else
				k=1;
		}
		cout<<s<<endl;
	}
	
}