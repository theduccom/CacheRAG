#include<bits/stdc++.h>
using namespace std;

int main() {
	double x;
	while(cin>>x){
		cout<<ceil((((x/9.8)*(x/9.8)*4.9)+5)/5)<<endl;
	}
}