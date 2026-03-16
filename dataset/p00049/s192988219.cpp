#include<iostream>
#include<fstream>
#include<sstream>
#include<cstdio>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<cstdlib>
using namespace std;

#define ull unsigned long long
#define ll long long
#define PI 3.141592654

int main(){
	string line;
	map<string,int> type;
	while(getline(cin,line)){
		int index = line.find(",");
		type[line.substr(index+1)]++;
	}	
	cout<<type["A"]<<endl;
	cout<<type["B"]<<endl;
	cout<<type["AB"]<<endl;
	cout<<type["O"]<<endl;
	return 0;
}