#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cstring>
#include <map>

using namespace std;



int main(){
	map<string,int> m;
	int a;
	char b;
	string c;
	while(cin>>a>>b>>c){
		m[c]++;
	}
	cout<<m["A"]<<endl;
	cout<<m["B"]<<endl;
	cout<<m["AB"]<<endl;
	cout<<m["O"]<<endl;
}