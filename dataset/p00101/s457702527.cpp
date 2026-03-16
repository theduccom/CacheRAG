#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
	int n;
	scanf("%d\n",&n);
	while(n--){
		string s;
		getline(cin,s);
		while(s.find("Hoshino")!=-1) s.replace(s.find("Hoshino"),7,"Hoshina");
		cout<<s<<"\n";
	}
	return 0;
}