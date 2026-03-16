#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b;
	char c[9];
	cin>>n;
	while(n--){
		cin>>c;
		sort(c,c+8);
		a=atoi(c);
		sort(c,c+8,greater<int>());
		b=atoi(c);
		cout<<b-a<<endl;
	}
}