#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string str;
	int n, r;
	int max, min;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>str;
		sort(str.begin(), str.end());
		min=atoi(str.c_str());
		reverse(str.begin(), str.end());
		max=atoi(str.c_str());
		cout << max-min << endl;
	}
	return 0;
}