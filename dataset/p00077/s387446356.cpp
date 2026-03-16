#include <iostream>
#include <string>
using namespace std;
int main(){
	char c,n;
	for(c;cin.get(c);)
		if(c!='@')cout<<c;
		else{
			cin>>n>>c;
			cout<<string(n-'0',c);
		}
}