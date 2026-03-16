#include <iostream>
using namespace std;

int main(void){
	bool t[3] = {true,false,false};
	char a,b,ch;

	while(cin>>a>>ch>>b){
		swap(t[a-'A'],t[b-'A']);
	}
	if(t[0]) cout<<"A\n";
	else if(t[1]) cout<<"B\n";
	else if(t[2]) cout<<"C\n";

	return 0;
}