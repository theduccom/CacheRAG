#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(){
	map<string,int> mm;
	int d;
	char a[1000];
	char b[3];
	while(cin >> a){
		sscanf(a,"%d,%s",&d,&b);
		mm[b]++;
	}
	cout << mm["A"] << endl << mm["B"] << endl << mm["AB"] << endl << mm["O"] << endl;
}