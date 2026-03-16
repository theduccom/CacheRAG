#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int mi,mx,n;
	string d;
	cin >> n;
	while(n--){
		cin >> d;
		sort(d.begin(),d.end());
		mi = atoi(d.c_str());
		reverse(d.begin(),d.end());
		mx = atoi(d.c_str());
		cout << mx-mi << endl; 
	}
}