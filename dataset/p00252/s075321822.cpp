#include<iostream>
#include<algorithm>

using namespace std;
string res[] = {
	"Close",
	"Open",
	"Close",
	"faaa",
	"Close",
	"faaaa",
	"Open"
};

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int x = a * 4 + b * 2 + c;
	cout << res[x] << endl;
	return 0;
}