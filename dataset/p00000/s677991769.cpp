#include<iostream>
using namespace std;
int main() {
	int x;
	for(int y=1;y<=9;y++){
		for(int i=1;i<=9;i++){
			x=y*i;
			cout<<y<<"x"<<i<<"="<<x<<endl;
		}
	}
return 0;
}
