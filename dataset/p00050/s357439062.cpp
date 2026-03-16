#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	string x;
	int n,m;
    vector<int> p, a;
	p.push_back(-1);
	a.push_back(-1);
	getline(cin, x);
	while(n=x.find("peach", p.back() + 1), ~n){
		p.push_back(n);
    }
	while(m=x.find("apple", a.back() + 1), ~m){
		a.push_back(m);
    }
	for(int i = 1; i < p.size(); i++){
		x.replace(p[i], 5, "apple");
    }
	for(int j = 1; j < a.size(); j++){
		x.replace(a[j], 5, "peach");
    }
	cout<< x <<endl;
	return 0;
}
