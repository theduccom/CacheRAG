#include<iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main(){
	int n;
	string s;
	int a,b;
	cin>>n;
	while(n--){
		cin>>s;
		sort(s.begin(),s.end());
		a = atoi(s.c_str());
		reverse(s.begin(),s.end());
		b = atoi(s.c_str());
		cout<<b-a<<endl;
	}
	return 0;
}