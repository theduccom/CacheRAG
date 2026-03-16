#include <iostream>
#include <string>
using namespace std;
int main(){
	int num[4]={0};
	int N;string st;
	while(cin >> N >> st){
		if(st==",A") num[0]++;
		if(st==",B") num[1]++;
		if(st==",AB") num[2]++;
		if(st==",O") num[3]++;
	};
	for(int i=0;i<4;i++) cout << num[i] <<'\n' ;
}