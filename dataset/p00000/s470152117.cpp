#include<iostream>
using namespace std;

int main(){
	for(int ix = 1;ix != 10;++ix)
		for(int jx = 1;jx != 10;++jx)
			cout <<ix<<'x'<<jx<<'='<<ix*jx<<endl;
	
	return 0;
}