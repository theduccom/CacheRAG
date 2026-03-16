#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int b[3];
	for(int i = 0 ; i < 3 ; i ++){
		scanf("%d",&b[i]);
	}
	if(b[1] == b[0] && b[2] != b[0])cout << "Open" << endl;
	else cout << "Close" << endl;
}