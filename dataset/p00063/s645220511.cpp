#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int count=0;
	string s1,s2;
	while(getline(cin,s2)){
		s1=s2;
		reverse(s2.begin(),s2.end());
		if(s1==s2)count++;
	}
	cout<<count<<endl;
	return 0;
}