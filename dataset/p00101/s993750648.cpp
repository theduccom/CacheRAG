#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int n,index;
	cin>>n;
	cin.ignore();
	vector<string> s(n);
	for(int i=0;i<n ; ++i){
		getline(cin,s[i]);
		while(s[i].find("Hoshino",0)!=string::npos){
			index=s[i].find("Hoshino",0);
			s[i].replace(index , 7 , "Hoshina");
		}
	}
	for(int i=0;i<n;++i){
		cout << s[i] << endl;
	}
	return 0; 
}