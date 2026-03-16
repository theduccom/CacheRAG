#include <iostream>
#include<stdio.h>
#include<map>
#include<vector>
using namespace std;
int main() {
	int a;
	map<string,int> cnt;
	char ch;
	string blood;
	cnt["A"]=0;cnt["B"]=0;cnt["AB"]=0;cnt["O"]=0;
	vector<int> bo(51,false);
	while(cin>>a>>ch>>blood){
		if(bo[a])continue;
		bo[a]=true;
		cnt[blood]++;
	}
	cout<<cnt["A"]<<endl<<cnt["B"]<<endl<<cnt["AB"]<<endl<<cnt["O"]<<endl;
	return 0;
}
