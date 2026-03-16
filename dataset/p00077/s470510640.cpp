#include <iostream>
using namespace std;
int main(){
	char c,n;
	for(c;cin.get(c);)
		if(c!='@')cout<<c;
		else{
			cin>>n>>c;
			for(;n>'0';n--)cout<<c;
		}
}