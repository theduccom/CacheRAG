#include <iostream>
using namespace std;

int main(void){
	bool t[3] = {true,false,false};
	char x,y,ch;

	while(cin>>x>>ch>>y){
		int idxX = x - 'A';
		int idxY = y - 'A';
		swap(t[idxX],t[idxY]);
	}
	if(t[0]) cout<<"A\n";
	if(t[1]) cout<<"B\n";
	if(t[2]) cout<<"C\n";

	return 0;
}