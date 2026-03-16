#include <iostream>
#include <string>
using namespace std;
int main(){
	char c,n,a;
	for (c;cin.get(c);)
		if(c!='@')cout<<c;
		else{
			cin>>n>>a;
			cout<<string(int(n-'0'),a);
		}
}