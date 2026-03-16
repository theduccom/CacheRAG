#include <bits/stdc++.h>
using namespace std;
int main(){
	double a[52];int c=0;
	while(cin>>a[c++]);
	sort(a,a+c-1);
	cout<<a[c-2]-a[0]<<endl;
}